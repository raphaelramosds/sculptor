#include <iostream>
#include <fstream>
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
                v[p][l][c].isOn = true;
                v[p][l][c].r = r; v[p][l][c].g = g; v[p][l][c].b = b;
                v[p][l][c].a = a;
            }
        }
    }
}

// removeBox: remove all voxels on range x0 to x1, y0 to y1 and z0 to z1

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1) {
    for (int p = z0; p <= z1; p++) {
        for (int l = x0; l <= x1; l++) {
            for (int c = y0; c <= y1; c++) {
                v[p][l][c].isOn = false;
                v[p][l][c].r = r; v[p][l][c].g = g; v[p][l][c].b = b;
                v[p][l][c].a = a;
            }
        }
    }
}

// writeOFF: exports a OFF file according with the given drawing instructions

void Sculptor::writeOFF(const char* filename) {

    unsigned int voxels = 0;

    // Calculate amount of voxels with property isOn = true

    for (int p = 0; p < nz; p++) {
        for (int l = 0; l < nx; l++) {
            for (int c = 0; c < ny; c++) {
                if (v[p][l][c].isOn)
                    voxels += 1;
            }
        }
    }

    // There will be voxels * 8 vertexes and voxels * 6 faces

    std::ofstream fout;

    std::cout << "log: creating " << filename << std::endl;
    fout.open(filename, std::ios::out);

    if (fout.is_open()) {

        fout << "OFF" << std::endl;
        fout << voxels * 6 << " " << voxels * 8 << " 0" << std::endl;

        fout.close();
    }
}

