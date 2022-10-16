#include <iostream>
#include <fstream>
#include <cmath>
#include "sculptor.h"
#include "voxel.h"

// @constructor Sculptor: allocate a 3D matrix

Sculptor::Sculptor(int _nx, int _ny, int _nz) {

    nx = _nx; ny = _ny; nz = _nz;

    std::cout << "log: allocating matrix" << std::endl;

    v = new Voxel**[_nz];

    v[0] = new Voxel*[_nx * _nz];

    for (int p = 1; p < _nz; p++)
        v[p] = v[p - 1] + _nx;

    v[0][0] = new Voxel[_nx * _ny * _nz];

    for (int l = 1; l < _nx * _nz; l++ )
        v[0][l] = v[0][l - 1] + _ny;
}

// @destructor ~Sculptor: deallocate a 3D matrix

Sculptor::~Sculptor() {
    std::cout << "log: deallocating matrix" << std::endl;
    delete v[0][0];
    delete v[0];
    delete v;
}

// setColor: set current color

void Sculptor::setColor(float r, float g, float b, float a) {
    this->r = r; this->g = g; this->b = b; this->a = a;
}

// putVoxel: put a voxel on a specific index [x][y][z]

void Sculptor::putVoxel(int x, int y, int z) {
    if ((x < nx && x >= 0) && (y < ny && y >= 0) && (z < nz && z >= 0)) {
        v[x][y][z].isOn = true;
        v[x][y][z].r = r; v[x][y][z].g = g; v[x][y][z].b = b;
        v[x][y][z].a = a;
    } else {
        std::cout << "error: incorrect index";
    }
}

// cutVoxel: remove a voxel of a specific index [x][y][z]

void Sculptor::cutVoxel(int x, int y, int z) {
    if ((x < nx && x >= 0) && (y < ny && y >= 0) && (z < nz && z >= 0)) {
        v[x][y][z].isOn = false;
    } else {
        std::cout << "error: incorrect index";
    }
}

// putBox: enable all voxels on range x0 to x1, y0 to y1 and z0 to z1 and set to the current color

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1) {
    for (int p = z0; p <= z1; p++) {
        for (int l = x0; l <= x1; l++) {
            for (int c = y0; c <= y1; c++) {
                putVoxel(l,c,p);
            }
        }
    }
}

// cutBox: remove all voxels on range x0 to x1, y0 to y1 and z0 to z1

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1) {
    for (int p = z0; p <= z1; p++) {
        for (int l = x0; l <= x1; l++) {
            for (int c = y0; c <= y1; c++) {
                cutVoxel(l,c,p);
            }
        }
    }
}

/// Note: no need to loop over all the voxes! I defined a box that contains the
/// volume and only iterate within it

// putSphere: put a sphere whose center is [ xcenter ycenter zcenter ]

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius) {

    float s = xcenter, t = ycenter;

    for (int p = zcenter - radius; p < zcenter + radius; p++) {
        for (int l = s - radius; l < s + radius; l++) {
            for (int c = t - radius; c < t + radius; c++) {

                // shifts any voxel to the center

                float x = l - s;
                float y = c - t;
                float z = p - zcenter;

                if (x*x + y*y + z*z < radius*radius)
                    putVoxel(l,c,p);
            }
        }
    }
}

// cutSphere: remove a sphere whose center is [ xcenter ycenter zcenter ]

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius) {

    float s = xcenter, t = ycenter;

    for (int p = zcenter - radius; p < zcenter + radius; p++) {
        for (int l = s - radius; l < s + radius; l++) {
            for (int c = t - radius; c < t + radius; c++) {

                float x = l - s;
                float y = c - t;
                float z = p - zcenter;

                if (x*x + y*y + z*z < radius*radius)
                    cutVoxel(l,c,p);
            }
        }
    }
}

// putEllipsoid: put an ellipsoid whose center is [ xcenter ycenter zcenter ]

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz) {

    float s = xcenter, t = ycenter;

    for (int p = zcenter - rz; p < zcenter + rz; p++) {
        for (int l = s - rx; l < s + rx; l++) {
            for (int c = t - ry; c < t + ry; c++) {

                float x = (float)(l - s) / rx;
                float y = (float)(c - t) / ry;
                float z = (float)(p - zcenter) / rz;

                if (x*x + y*y + z*z <= 1)
                    putVoxel(l,c,p);
            }
        }
    }
}

// putEllipsoid: remove an ellipsoid whose center is [ xcenter ycenter zcenter ]

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz) {

    float s = xcenter, t = ycenter;

    for (int p = zcenter - rz; p < zcenter + rz; p++) {
        for (int l = s - rx; l < s + rx; l++) {
            for (int c = t - ry; c < t + ry; c++) {

                float x = (float)(l - s) / rx;
                float y = (float)(c - t) / ry;
                float z = (float)(p - zcenter) / rz;

                if (x*x + y*y + z*z <= 1)
                    cutVoxel(l,c,p);
            }
        }
    }
}

// putCylinder: put a cylinder shifted of [x0 y0 z0] and rotate fi degrees it across z-axis

void Sculptor::putCylinder(int xcenter, int ycenter, int zcenter, int radius, int height, char axis) {

    float s = xcenter, t = ycenter;

    switch(axis) {
        case 'y': // Z
            for (int p = zcenter; p <= height + zcenter; p++) {
              for (int l = s - radius; l < s + radius; l++) {
                for (int c = t - radius; c < t + radius; c++) {
                    float x = l - s;
                    float y = c - t;
                    if( x*x + y*y < radius*radius && x*x + y*y >= (radius-1)*(radius-1))
                        putVoxel(l,c,p);
                }
              }
            }
        break;
        case 'x': // y
            for (int l = s; l <= height + s; l++){
                for (int p = zcenter - radius; p < zcenter + radius; p++) {
                    for (int c = t - radius; c < t + radius; c++) {
                        float z = p - zcenter;
                        float y = c - t;
                        if( z*z + y*y < radius*radius && z*z + y*y >= (radius-1)*(radius-1))
                            putVoxel(l,c,p);
                    }
                }
            }
        break;
    }
}

// putLine

void Sculptor::putLine(int a, int b, int slope, int x0, int y0, int z0) {
    for (int i = a; i <= b; i++) {
        putVoxel(x0,slope*i + y0, i + z0);
        putVoxel(x0 + 1,slope*i + y0, i + z0);
    }
}

// writeOFF: exports a OFF file according with the given drawing instructions

void Sculptor::writeOFF(const char* filename) {

    unsigned int voxels = 0;
    unsigned int currface = 0;

    // Calculate amount of voxels with property isOn = true

    for (int p = 0; p < nz; p++) {
        for (int l = 0; l < nx; l++) {
            for (int c = 0; c < ny; c++) {
                if (v[p][l][c].isOn)
                    voxels += 1;
            }
        }
    }

    std::cout << "log: preparing " << voxels << " voxels" << std::endl;

    // There will be (voxels * 8) vertexes and (voxels * 6) faces!

    std::ofstream fout;

    std::cout << "log: creating " << filename << std::endl;
    fout.open(filename, std::ios::out);

    if (fout.is_open()) {

        // Header

        std::cout << "log: building header" << std::endl;

        fout << "OFF" << std::endl;
        fout << voxels * 8 << " " << voxels * 6 << " " << 0 << std::endl;

        // Vertexes coordinates based on [x y z]

        std::cout << "log: building vertexes coordinates" << std::endl;

        for (int p = 0; p < nz; p++) {
            for (int l = 0; l < nx; l++) {
                for (int c = 0; c < ny; c++) {
                    if (v[p][l][c].isOn) {
                        fout << -0.5 + l << " " <<  0.5 + c << " " << -0.5 + p << std::endl;
                        fout << -0.5 + l << " " << -0.5 + c << " " << -0.5 + p << std::endl;
                        fout <<  0.5 + l << " " << -0.5 + c << " " << -0.5 + p << std::endl;
                        fout <<  0.5 + l << " " <<  0.5 + c << " " << -0.5 + p << std::endl;
                        fout << -0.5 + l << " " <<  0.5 + c << " " <<  0.5 + p << std::endl;
                        fout << -0.5 + l << " " << -0.5 + c << " " <<  0.5 + p << std::endl;
                        fout <<  0.5 + l << " " << -0.5 + c << " " <<  0.5 + p << std::endl;
                        fout <<  0.5 + l << " " <<  0.5 + c << " " <<  0.5 + p << std::endl;
                    }
                }
            }
        }

        // Faces specifications

        std::cout << "log: building faces specifications" << std::endl;

        for (int p = 0; p < nz; p++) {
            for (int l = 0; l < nx; l++) {
                for (int c = 0; c < ny; c++) {

                    if (v[p][l][c].isOn) {
                        // specicifies face whose vertexes have indexes [ a b c d ]

                        fout << 4 << " " << 0 + currface << " " << 3 + currface << " " << 2 + currface << " " << 1 + currface << " " << v[p][l][c].r << " " << v[p][l][c].g << " " << v[p][l][c].b << " " << v[p][l][c].a << std::endl;
                        fout << 4 << " " << 4 + currface << " " << 5 + currface << " " << 6 + currface << " " << 7 + currface << " " << v[p][l][c].r << " " << v[p][l][c].g << " " << v[p][l][c].b << " " << v[p][l][c].a << std::endl;
                        fout << 4 << " " << 0 + currface << " " << 1 + currface << " " << 5 + currface << " " << 4 + currface << " " << v[p][l][c].r << " " << v[p][l][c].g << " " << v[p][l][c].b << " " << v[p][l][c].a << std::endl;
                        fout << 4 << " " << 0 + currface << " " << 4 + currface << " " << 7 + currface << " " << 3 + currface << " " << v[p][l][c].r << " " << v[p][l][c].g << " " << v[p][l][c].b << " " << v[p][l][c].a << std::endl;
                        fout << 4 << " " << 3 + currface << " " << 7 + currface << " " << 6 + currface << " " << 2 + currface << " " << v[p][l][c].r << " " << v[p][l][c].g << " " << v[p][l][c].b << " " << v[p][l][c].a << std::endl;
                        fout << 4 << " " << 1 + currface << " " << 2 + currface << " " << 6 + currface << " " << 5 + currface << " " << v[p][l][c].r << " " << v[p][l][c].g << " " << v[p][l][c].b << " " << v[p][l][c].a << std::endl;

                        // and increment another indexes by 8, i.e, [ a + 8k b + 8k c + 8k d + 8k ]

                        currface += 8;
                    }
                }
            }
        }

        std::cout << "success: file " << filename << " exported" << std::endl;

        fout.close();
    }
}

