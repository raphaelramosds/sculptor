#include <fstream>
#include <vector>
#include <QDebug>

#include "Voxel.h"

#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief The Sculptor class allows you to draw any sculpture with voxel elements
 * @details This class dinamically allocates a three dimension matrix and makes it available for you to draw any sculpture with cubes whose dimensions are 1 x 1 x 1
 * */

class Sculptor {
private:
    Voxel ***v; // 3D matrix
    int nx,ny,nz; // Dimensions
    float r,g,b,a; // Current drawing color
    std::ofstream fout;
public:

    /**
       * @details Sculptor is the constructor. It allocates a 3D matrix based on the number of lines, columns and planes. You can access the element of the `x` th line, `y` th column and `z` th plane with `v[i][j][k]`
       * @param _nx lines
       * @param _ny columns
       * @param _nz planes
       * */

    Sculptor(int _nx, int _ny, int _nz);

    /**
       * @details ~Sculptor deallocate a 3D matrix. It's called everytime the `.OFF` file is exported
       * */

    ~Sculptor();

    /**
       * @details Set the drawing current color, you can set it within 0.0 to 1.0.
       * If you want to pass a specific RGB color `C`, just calculate `C/255`
       * */

    void setColor(float r, float g, float b, float a);

    /**
       * @details Put a voxel on a specific index `[x][y][z]`
       * */

    void putVoxel(int x, int y, int z);

    /**
       * @details Remove a voxel of a specific index `[x][y][z]`
       * */

    void cutVoxel(int x, int y, int z);

    /**
       * @details Enable all voxels on range `x0` to `x1`, `y0` to `y1` and `z0` to `z1` and set to the current color
       * */

    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
       * @details Remove all voxels on range `x0` to `x1`, `y0` to `y1` and `z0` to `z1`
       * */

    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
       * @details Put a sphere of radius `radius` Put an ellipsoid whose center in X, Y and Z are `xcenter`, `ycenter` and `zcenter`, respectively
       **/

    void putSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
       * @details Remove a sphere of radius `radius` Put an ellipsoid whose center in X, Y and Z are `xcenter`, `ycenter` and `zcenter`, respectively
       * */

    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
       * @details Put an ellipsoid whose center in X, Y and Z are `xcenter`, `ycenter` and `zcenter`, respectively, vertical radius is `rz`, depth radius is `rx` and horizontal radius is `ry`
       * */

    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
       * @details Remove an ellipsoid whose center in X, Y and Z are `xcenter`, `ycenter` and `zcenter`, respectively, vertical radius is `rz`, depth radius is `rx` and horizontal radius is `ry`
       * */

    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
       * @details Exports a OFF file on the current directory, according with the given drawing instructions
       * */

    void writeOFF(const char* filename);

    /**
       * @details Returns the k-th plane of m[x][y][k]
       * */

    std::vector<std::vector<Voxel>> getPlane(int plane = 0);

};
#endif // SCULPTOR_H
