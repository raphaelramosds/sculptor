#include <iostream>
#include "sculptor.h"

void putCylinder(int xcenter, int ycenter, int zcenter, int rh, int rv, int height, char axis, Sculptor& object);
void putLine(int a, int b, int slope, int x0, int y0, int z0, Sculptor& object);

int main()
{

    Sculptor figura(51,51,71);

    unsigned int scalex = 3;
	
	float y[4] = {0.95,0.95,0,1};
	float k[4] = {0.0,0.0,0.0,1.0};
	float b[4] = {0.0,0.4,0.5,1.0};

    // Shoes

    figura.setColor(k[0],k[1],k[2],k[3]);

    figura.putBox(15, 20, 15 + 2, 17 + 2, 0, 1);
    figura.putBox(15, 20, 23 - 2, 25 - 2, 0, 1);

    // Body

    figura.setColor(y[0], y[1], y[2], y[3]);
    putCylinder(16, 20, 7 + 1, 3 + scalex, 6, 20,'y',figura);

    figura.cutBox(21 + 1, 21 + 1, 18 + 2, 18 + 2, 13, 22);
    figura.putBox(21 + 1 - 1, 21 + 1 - 1, 18 + 2, 18 + 2, 13, 22);

    // Arms

    putLine(4, 10, -1, 15 - 1, 35 - 18, 10 - 3, figura);
    figura.putBox(19 - 4, 21 - 4, 25, 32, 17 - 6, 18 - 6);

    // Head

    figura.putEllipsoid(16, 20, 25 + 3, 2 + scalex, 6, 4);

    // Pants

    figura.setColor(b[0], b[1], b[2], b[3]);

    putCylinder(16, 16 + 2, 2, 1, 1, 5,'y',figura);
    putCylinder(16, 24 - 2, 2, 1, 1, 5, 'y',figura);

    figura.putEllipsoid(16, 20, 7, 4 + scalex, 7, 3);

    // Macacao

    figura.putBox(22, 22, 18 - 1, 23, 8, 13);
    figura.putBox(22 - 12, 22 - 12, 18 - 1, 23, 8, 13);

    figura.putVoxel(22, 23, 13);
    figura.putVoxel(22, 23 - 6, 13);
    
    figura.putVoxel(22 - 2, 23 + 2, 13 + 1);
    figura.putVoxel(22 - 2, 23 - 6 - 2, 13 + 1);

    figura.putVoxel(22 - 2, 23 + 2, 13);
    figura.putVoxel(22 - 2, 23 - 6 - 2, 13);
    
    figura.putVoxel(22 - 2 + 1, 23 + 2, 13);
    figura.putVoxel(22 - 2 + 1, 23 - 6 - 2, 13);

    figura.putVoxel(22 - 2 + 1, 23 + 2 - 1, 13);
    figura.putVoxel(22 - 2 + 1, 23 - 6 - 2 + 1, 13);

    figura.putBox(13, 20, 25, 26, 17 - 3, 17 - 3);
    figura.putBox(13, 20, 25 - 11, 26 - 11, 17 - 3, 17 - 3);

    figura.putVoxel(21 - 9,26 - 1,14);
    figura.putVoxel(21 - 9,14 + 1,14);

    figura.putVoxel(21 - 9, 26, 14);
    figura.putVoxel(21 - 9, 14, 14);

    figura.putVoxel(21 - 9 - 1, 26 - 2, 14);
    figura.putVoxel(21 - 9 - 1, 14 + 2, 14);

    figura.putVoxel(21 - 9 - 1, 26 - 2, 13);
    figura.putVoxel(21 - 9 - 1, 14 + 2, 13);

    figura.putVoxel(21 - 9 - 2, 26 - 2, 13);
    figura.putVoxel(21 - 9 - 2, 14 + 2, 13);

    figura.setColor(y[0], y[1], y[2], y[3]);

    figura.putVoxel(17,26 - 1,9);
    figura.putVoxel(17,14 + 1,9);

    figura.putVoxel(15,26 - 1,9);
    figura.putVoxel(15,14 + 1,9);

    figura.setColor(k[0],k[1],k[2],k[3]);
	
    putCylinder(21,18 + 2,8 + 2,2,2,1,'x',figura);

    // Gloves

    putLine(9, 10, -1, 15 - 1, 35 - 18, 10 - 3,figura);
    figura.putBox(19 - 4, 21 - 4, 30, 32, 17 - 6, 18 - 6);

    // Mouth
    
    figura.putBox(21, 21, 19, 21, 15, 15);
    figura.putVoxel(21,18,16);
    figura.putVoxel(21,22,16);

    // Eyes

    figura.setColor(1.0, 1.0, 1.0, 1.0);
    figura.putSphere(20,18,25,2);
    figura.putSphere(20,18 + 5,25,2);

    figura.setColor(0.35,0.23,0.10,1.0);
    figura.putVoxel(21,18,25);
    figura.putVoxel(21,18 + 5,25);

    // Glasses

    figura.setColor(0.82, 0.82, 0.82, 1.0);
    putCylinder(20, 18 , 25, 3, 3, 3,'x',figura);
    putCylinder(20, 18 + 5, 25, 3, 3, 3,'x',figura);

    figura.setColor(b[0], b[0], b[0], b[0]);
    putCylinder(20 - 5, 18 + 2, 25 - 1, 5 + 1, 5 + 2, 2, 'y',figura);

    figura.writeOFF("keven.off");

    return 0;
}


// putCylinder: put a cylinder shifted of [x0 y0 z0] in X and Z

void putCylinder(int xcenter, int ycenter, int zcenter, int rx, int ry, int height, char axis, Sculptor& object) {
    float s = xcenter, t = ycenter;

    switch(axis) {
        case 'y': // Z
            for (int p = zcenter; p <= height + zcenter; p++) {
              for (int l = s - rx; l <= s + rx; l++) {
                for (int c = t - ry; c <= t + ry; c++) {

                    float xe = (float)(l - s)/rx; // x "exterior"
                    float ye = (float)(c - t)/ry;

                    float xi = rx > 1 ? (float)(l - s)/(rx - 1) : true; // x "interior"
                    float yi = ry > 1 ? (float)(c - t)/(ry - 1) : true;

                    if( xe*xe + ye*ye <= 1 && xi*xi + yi*yi > 1)
                        object.putVoxel(l,c,p);
                }
              }
            }
        break;

        case 'x': // y
            for (int l = s; l <= height + s; l++){
                for (int p = zcenter - rx; p <= zcenter + rx; p++) {
                    for (int c = t - ry; c <= t + ry; c++) {

                        float ze = (float) (p - zcenter)/rx;
                        float ye = (float) (c - t)/ry;

                        float yi = rx > 1 ? (float)(p - zcenter)/(rx - 1) : true;
                        float zi = ry > 1 ? (float)(c - t)/(ry - 1) : true;

                        if(ze*ze + ye*ye <= 1 && zi*zi + yi*yi >1)
                            object.putVoxel(l,c,p);
                    }
                }
            }
        break;
    }
}

// putLine: create parametric lines given initial and final points

void putLine(int a, int b, int slope, int x0, int y0, int z0, Sculptor& object) {
    unsigned count = 0;
    for (int i = a; i <= b; i++) {
        object.putVoxel(x0 - slope,slope*i + y0 + 1, i + z0);
        object.putVoxel(x0 - slope + 1,slope*i + y0 + 1, i + z0);
        object.putVoxel(x0 - slope + 2,slope*i + y0 + 1, i + z0);
        object.putVoxel(x0 - slope,slope*i + y0 + 1, i + z0 - 1);
        object.putVoxel(x0 - slope + 1,slope*i + y0 + 1, i + z0 - 1);
        object.putVoxel(x0 - slope + 2,slope*i + y0 + 1, i + z0 - 1);
        count++;
    }

}

