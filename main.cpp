#include <iostream>
#include "sculptor.h"

void putCylinder(int xcenter, int ycenter, int zcenter, int rh, int rv, int height, char axis, Sculptor& object);
void putLine(int a, int b, int slope, int x0, int y0, int z0, Sculptor& object);

int main()
{

    Sculptor figura(51,51,71);

    unsigned int scalex = 3;
	
	float y[4] = {1.0,0.84,0.39,1};
	float k[4] = {0.0,0.0,0.0,1.0};
	float b[4] = {0.0,0.4,0.5,1.0};

    // Shoes

    figura.setColor(k[0],k[1],k[2],k[3]);

    figura.putBox(15, 20, 17, 19, 0, 1);
    figura.putBox(15, 20, 21, 23, 0, 1);

    // Body

    figura.setColor(y[0], y[1], y[2], y[3]);
    putCylinder(16, 20, 8, 3 + scalex, 6, 20,'y',figura);

    figura.cutBox(22, 22, 20, 20, 13, 22);
    figura.putBox(21, 21, 20, 20, 13, 22);

    // Arms

    for (int j = 0; j < 3; j++) {
        putLine(4, 10, -1, 14 + j, 18, 7, figura);
        putLine(4, 10, -1, 14 + j, 18, 8, figura);
    }

    figura.putBox(15, 17, 25, 32, 11, 12);

    // Head

    figura.putEllipsoid(16, 20, 28, 3 + scalex, 6, 4);
    figura.cutEllipsoid(16, 20, 28, 3 + scalex - 1, 5, 3);

    // Pants

    figura.setColor(b[0], b[1], b[2], b[3]);

    putCylinder(16, 18, 2, 1, 1, 5,'y',figura);
    putCylinder(16, 22, 2, 1, 1, 5, 'y',figura);

    figura.putEllipsoid(16, 20, 7, 4 + scalex, 7, 3);
    figura.cutEllipsoid(16, 20, 7, 4 + scalex - 1, 6, 2);

    // Macacao

    figura.putBox(22, 22, 17, 23, 8, 13);
    figura.putBox(10, 10, 17, 23, 8, 13);

    figura.putVoxel(22, 23, 13);
    figura.putVoxel(22, 17, 13);

    for (int j = 1; j >= 0; j--) {
        figura.putVoxel(20, 23 + 2, 13 + j);
        figura.putVoxel(20, 15, 13 + j);
        figura.putVoxel(21, 23 + 2 - j, 13);
        figura.putVoxel(21, 15 + j, 13);
        figura.putBox(13, 20, 25 - 11*j, 26 - 11*j, 14, 14);
        figura.putVoxel(12,25 - 10*j,14);
        figura.putVoxel(11, 24 - 8*j, 14);
        figura.putVoxel(12, 14 + 12*j, 14);
    }

    for (int j = 2; j > 0; j--) {
        figura.putVoxel(12 - j, 24, 13);
        figura.putVoxel(12 - j, 16, 13); 
    }

    figura.setColor(y[0], y[1], y[2], y[3]);

    for (int j = 0; j < 2; j++) {
        figura.putVoxel(17 - 2*j,25,9);
        figura.putVoxel(17 - 2*j,15,9);
    }

    figura.setColor(k[0],k[1],k[2],k[3]);
	
    putCylinder(21,18 + 2,8 + 2,2,2,1,'x',figura);
    figura.putVoxel(22,20,10);
    figura.cutVoxel(9,20,7);

    figura.setColor(b[0],b[1],b[2],b[3]);
    figura.putVoxel(10,20,7);

    // Gloves

    figura.setColor(k[0],k[1],k[2],k[3]);
    
    for (int j = 0; j < 3; j++) {
        putLine(9, 10, -1, 14 + j, 17, 8, figura);
        putLine(9, 10, -1, 14 + j, 18, 8, figura);

    }
    figura.putBox(15, 17, 30, 32, 11, 12);

    // Mouth
    
    figura.putBox(21, 21, 19, 21, 15, 15);
    figura.putVoxel(21,18,16);
    figura.putVoxel(21,22,16);

    // Eyes

    figura.setColor(0.99, 0.99, 0.99, 1.0);
    figura.putSphere(20,18,25,2);
    figura.cutSphere(20,18,25,1);
    figura.putSphere(20,23,25,2);

    figura.setColor(0.35,0.23,0.10,1.0);
    figura.putVoxel(21,18,25);
    figura.putVoxel(21,18 + 5,25);

    // Glasses

    figura.setColor(0.82, 0.82, 0.82, 1.0);
    putCylinder(20, 18 , 25, 3, 3, 3,'x',figura);
    putCylinder(20, 23, 25, 3, 3, 3,'x',figura);

    figura.setColor(b[0], b[0], b[0], b[0]);
    putCylinder(15, 20, 24, 6, 7, 2, 'y',figura);

    // Hair

    for (int j = 0; j < 2; j++) {
        figura.putVoxel(15, 20, 32 + j);
        figura.putVoxel(16, 20, 32 + j);
        figura.putVoxel(17, 20, 32 + j);
    }

    figura.putVoxel(18,20,34);
    figura.putVoxel(14,20,34);

    for (int j = 0; j < 3; j++) {

        figura.putVoxel(16, 20 - 1, 32 + j);
        figura.putVoxel(16, 20 + 1, 32 + j);

        figura.putVoxel(16, 20 + j, 35 + j - 1);
        figura.putVoxel(16, 20 - j, 35 + j - 1);
    }

    // Export off

    figura.writeOFF("assets/keven.off");

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

// putLine: create parametric line given initial and final points

void putLine(int a, int b, int slope, int x0, int y0, int z0, Sculptor& object) {
    unsigned count = 0;
    for (int i = a; i <= b; i++) {
        object.putVoxel(x0 - slope, slope*i + y0, i + z0);
        count++;
    }

}