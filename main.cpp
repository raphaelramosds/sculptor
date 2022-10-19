#include <iostream>
#include "sculptor.h"

int main()
{

    Sculptor figura(51,51,71);

    unsigned int scalex = 3;

    // Shoes

    figura.setColor(0,0,0,1.0);

    figura.putBox(15, 20, 15 + 2, 17 + 2, 0, 1);
    figura.putBox(15, 20, 23 - 2, 25 - 2, 0, 1);

    // Pants

    figura.setColor(8, 103, 147, 1.0);

    figura.putCylinder(16, 16 + 2, 2, 1, 1, 5,'y');
    figura.putCylinder(16, 24 - 2, 2, 1, 1, 5, 'y');

    figura.putEllipsoid(16, 20, 7, 4 + scalex, 7, 3);

    // Macacao

    figura.putCylinder(16, 20, 7, 4 + scalex, 6, 5, 'y');
    figura.putCylinder(16, 20, 11, 4 + scalex, 4 + scalex, 1, 'y');

    // Body

    figura.setColor(240, 232, 8, 1.0);
    figura.putCylinder(16, 20, 7 + 1, 3 + scalex, 6, 20, 'y');


    figura.cutBox(21 + 1, 21 + 1, 18 + 2, 18 + 2, 13, 22);
    figura.putBox(21 + 1 - 1, 21 + 1 - 1, 18 + 2, 18 + 2, 13, 22);

    // Arms

    figura.putLine(4, 10, 0, 15, 5 + 8, 10 - 9);
    figura.putLine(4, 10, 1, 15, 35 - 13, 10 - 5);

    // Head

    figura.putEllipsoid(16, 20, 25 + 3, 2 + scalex, 6, 4);

    // Mouth

    figura.setColor(0, 0, 0, 1.0);
    
    figura.putBox(21, 21, 19, 21, 15, 15);
    figura.putVoxel(21,18,16);
    figura.putVoxel(21,22,16);

    // Eyes

    figura.setColor(255, 255, 255, 1.0);
    figura.putSphere(20,18,25,2);
    figura.putSphere(20,18 + 5,25,2);

    figura.setColor(93,59,26,1.0);
    figura.putVoxel(21,18,25);
    figura.putVoxel(21,18 + 5,25);

    // Glasses

    figura.setColor(211, 211, 211, 1.0);
    figura.putCylinder(20, 18 , 25, 3, 3, 3,'x');
    figura.putCylinder(20, 18 + 5, 25, 3, 3, 3,'x');

    figura.setColor(0, 0, 0, 1.0);
    figura.putCylinder(20 - 5, 18 + 2, 25 - 1, 5 + 1, 5 + 2, 2, 'y');

    figura.writeOFF("figura.off");

    return 0;
}
