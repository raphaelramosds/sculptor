#include <iostream>
#include <fstream>
#include <cmath>

#include "sculptor.h"
#include "Voxel.h"

// @constructor Sculptor: allocate a 3D matrix

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;

    // Building file

    fout.open("assets/instrucoes.txt");
    fout << "dim " << _nx << " " << _ny << " " << _nz << std::endl;

    // Allocating 3D matrix

    std::cout << "log: allocating matrix" << std::endl;

    v = new Voxel **[_nz];

    v[0] = new Voxel *[_nx * _nz];

    for (int p = 1; p < nz; p++)
        v[p] = v[p - 1] + _nx;

    v[0][0] = new Voxel[_nx * _ny * _nz];

    for (int l = 1; l < _nx * _nz; l++)
        v[0][l] = v[0][l - 1] + _ny;

    // Set initial value of all elements to isOn = false
    // one need to do that because you aren't sure if the initial
    // value is true (it can be anything)

    for (int l = 1; l < _nx * _nz * _ny; l++)
        v[0][0][l].isOn = false;
}

// @destructor ~Sculptor: deallocate a 3D matrix

Sculptor::~Sculptor()
{
    std::cout << "log: deallocating matrix" << std::endl;
    delete v[0][0];
    delete v[0];
    delete v;
    fout.close();
}

// setColor: set current color

void Sculptor::setColor(float r, float g, float b, float a)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

// putVoxel: put a voxel on a specific index [x][y][z]

void Sculptor::putVoxel(int x, int y, int z)
{
    if ((x < nx && x >= 0) && (y < ny && y >= 0) && (z < nz && z >= 0))
    {
        v[x][y][z].isOn = true;
        v[x][y][z].r = r;
        v[x][y][z].g = g;
        v[x][y][z].b = b;
        v[x][y][z].a = a;
        fout << "putvoxel " << x << " " << y << " " << z << " " << this->r << " " << this->g << " " << this->b << " " << this->a << std::endl;
    }
    else
    {
        std::cout << "error: incorrect index";
    }
}

// cutVoxel: remove a voxel of a specific index [x][y][z]

void Sculptor::cutVoxel(int x, int y, int z)
{
    if ((x < nx && x >= 0) && (y < ny && y >= 0) && (z < nz && z >= 0))
    {
        v[x][y][z].isOn = false;
        fout << "cutvoxel " << x << " " << y << " " << z << std::endl;
    }
    else
    {
        std::cout << "error: incorrect index";
    }
}

// putBox: enable all voxels on range x0 to x1, y0 to y1 and z0 to z1 and set to the current color

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    fout << "putbox " << x0 << " " << x1 << " " << y0 << " " << y1 << " " << z0 << " " << z1 << " " << this->r << " " << this->g << " " << this->b << " " << this->a << std::endl;

    for (int p = z0; p <= z1; p++)
    {
        for (int l = x0; l <= x1; l++)
        {
            for (int c = y0; c <= y1; c++)
            {
                v[l][c][p].isOn = true;
                v[l][c][p].r = this->r;
                v[l][c][p].g = this->g;
                v[l][c][p].b = this->b;
                v[l][c][p].a = this->a;
            }
        }
    }
}

// cutBox: remove all voxels on range x0 to x1, y0 to y1 and z0 to z1

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    fout << "cutbox " << x0 << " " << x1 << " " << y0 << " " << y1 << " " << z0 << " " << z1 << std::endl;

    for (int p = z0; p <= z1; p++)
    {
        for (int l = x0; l <= x1; l++)
        {
            for (int c = y0; c <= y1; c++)
            {
                v[l][c][p].isOn = false;
            }
        }
    }
}

// Note: no need to loop over all the voxes! I defined a box that contains the
// volume and only iterate within it

// putSphere: put a sphere whose center is [ xcenter ycenter zcenter ]

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    fout << "putsphere " << xcenter << " " << ycenter << " " << zcenter << " " << radius << " " << this->r << " " << this->g << " " << this->b << " " << this->a << std::endl;

    for (int p = zcenter - radius; p < zcenter + radius; p++)
    {
        for (int l = xcenter - radius; l < xcenter + radius; l++)
        {
            for (int c = ycenter - radius; c < ycenter + radius; c++)
            {

                // shifts any voxel to the center

                float x = l - xcenter;
                float y = c - ycenter;
                float z = p - zcenter;

                if (x * x + y * y + z * z < radius * radius)
                {
                    v[l][c][p].isOn = true;
                    v[l][c][p].r = this->r;
                    v[l][c][p].g = this->g;
                    v[l][c][p].b = this->b;
                    v[l][c][p].a = this->a;
                }
            }
        }
    }
}

// cutSphere: remove a sphere whose center is [ xcenter ycenter zcenter ]

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    fout << "cutsphere " << xcenter << " " << ycenter << " " << zcenter << " " << radius << std::endl;

    for (int p = zcenter - radius; p < zcenter + radius; p++)
    {
        for (int l = xcenter - radius; l < xcenter + radius; l++)
        {
            for (int c = ycenter - radius; c < ycenter + radius; c++)
            {

                float x = l - xcenter;
                float y = c - ycenter;
                float z = p - zcenter;

                if (x * x + y * y + z * z < radius * radius)
                {
                    v[l][c][p].isOn = false;
                }
            }
        }
    }
}

// putEllipsoid: put an ellipsoid whose center is [ xcenter ycenter zcenter ]

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    fout << "putellipsoid " << xcenter << " " << ycenter << " " << zcenter << " " << rx << " " << ry << " " << rz << " " << this->r << " " << this->g << " " << this->b << " " << this->a << std::endl;

    for (int p = zcenter - rz; p < zcenter + rz; p++)
    {
        for (int l = xcenter - rx; l < xcenter + rx; l++)
        {
            for (int c = ycenter - ry; c < ycenter + ry; c++)
            {
                float x = (float)(l - xcenter) / rx;
                float y = (float)(c - ycenter) / ry;
                float z = (float)(p - zcenter) / rz;

                if (x * x + y * y + z * z < 1)
                {
                    v[l][c][p].isOn = true;
                    v[l][c][p].r = this->r;
                    v[l][c][p].g = this->g;
                    v[l][c][p].b = this->b;
                    v[l][c][p].a = this->a;
                }
            }
        }
    }
}

// putEllipsoid: remove an ellipsoid whose center is [ xcenter ycenter zcenter ]

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{

    fout << "cutellipsoid " << xcenter << " " << ycenter << " " << zcenter << " " << rx << " " << ry << " " << rz << " " << std::endl;

    for (int p = zcenter - rz; p < zcenter + rz; p++)
    {
        for (int l = xcenter - rx; l < xcenter + rx; l++)
        {
            for (int c = ycenter - ry; c < ycenter + ry; c++)
            {

                float x = (float)(l - xcenter) / rx;
                float y = (float)(c - ycenter) / ry;
                float z = (float)(p - zcenter) / rz;

                if (x * x + y * y + z * z < 1)
                {
                    v[l][c][p].isOn = false;
                }
            }
        }
    }
}

// writeOFF: exports a OFF file according with the given drawing instructions

void Sculptor::writeOFF(const char *filename)
{

    unsigned int voxels = 0;
    unsigned int currface = 0;

    // Calculate amount of voxels with property isOn = true

    for (int p = 0; p < nz; p++)
    {
        for (int l = 0; l < nx; l++)
        {
            for (int c = 0; c < ny; c++)
            {
                if (v[p][l][c].isOn == true)
                    voxels += 1;
            }
        }
    }

    std::cout << "log: preparing " << voxels << " voxels" << std::endl;

    // There will be (voxels * 8) vertexes and (voxels * 6) faces!

    std::ofstream fout;

    std::cout << "log: creating " << filename << std::endl;
    fout.open(filename, std::ios::out);

    if (fout.is_open())
    {

        // Header

        std::cout << "log: building header" << std::endl;

        fout << "OFF" << std::endl;
        fout << voxels * 8 << " " << voxels * 6 << " " << 0 << std::endl;

        // Vertexes coordinates based on [x y z]

        std::cout << "log: building vertexes coordinates" << std::endl;

        fout << std::fixed; // @enumerate fixed: força a saida como nomenclatura de ponto fixo. Ex: 3.59 -> 3.590000

        for (int p = 0; p < nz; p++)
        {
            for (int l = 0; l < nx; l++)
            {
                for (int c = 0; c < ny; c++)
                {
                    if (v[p][l][c].isOn == true)
                    {
                        fout << -0.5 + l << " " << 0.5 + c << " " << -0.5 + p << std::endl;
                        fout << -0.5 + l << " " << -0.5 + c << " " << -0.5 + p << std::endl;
                        fout << 0.5 + l << " " << -0.5 + c << " " << -0.5 + p << std::endl;
                        fout << 0.5 + l << " " << 0.5 + c << " " << -0.5 + p << std::endl;
                        fout << -0.5 + l << " " << 0.5 + c << " " << 0.5 + p << std::endl;
                        fout << -0.5 + l << " " << -0.5 + c << " " << 0.5 + p << std::endl;
                        fout << 0.5 + l << " " << -0.5 + c << " " << 0.5 + p << std::endl;
                        fout << 0.5 + l << " " << 0.5 + c << " " << 0.5 + p << std::endl;
                    }
                }
            }
        }

        // Faces specifications

        std::cout << "log: building faces specifications" << std::endl;

        for (int p = 0; p < nz; p++)
        {
            for (int l = 0; l < nx; l++)
            {
                for (int c = 0; c < ny; c++)
                {

                    if (v[p][l][c].isOn == true)
                    {
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

std::vector<std::vector<Voxel>> Sculptor::getPlane(int plane)
{
    std::vector<std::vector<Voxel>> p;

    // Verify plane

    if (!(plane < nx)) {
        qDebug() << "Invalid index " << plane;
    }

    // Fill plane

    for (int l = 0; l < nx; l++)
    {
        // Create a new line of Voxels

        std::vector<Voxel> pline;
        pline.resize(ny); // start with ny columns

        for (int c = 0; c < ny; c++) // fill each voxel with Sculptor's object properites
        {
            pline[c].a = v[l][c][plane].a;
            pline[c].r = v[l][c][plane].r;
            pline[c].g = v[l][c][plane].g;
            pline[c].b = v[l][c][plane].b;
            pline[c].isOn = v[l][c][plane].isOn;
        }

        // Add line to the 2D vector p

        p.push_back(pline);

    }

    return p;
}
