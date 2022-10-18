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

    figura.putEllipsoid(16, 20, 7, 4 + scalex, 8, 4);
    figura.putCylinder(16, 20, 7, 4 + scalex, 5, 5, 'y');

    // Body

    figura.setColor(240, 232, 8, 1.0);
    figura.putCylinder(16, 20, 7 + 1, 3 + scalex, 6, 18, 'y');

    // Head

    figura.putEllipsoid(16, 20, 25 + 2, 2 + scalex, 6, 4);

    // Eyes and glasses

    figura.setColor(255, 255, 255, 1.0);

    figura.putSphere(20,18,25,2);

    figura.setColor(211, 211, 211, 1.0);
    figura.putCylinder(20, 18 , 25, 3, 3, 3,'x');

    figura.writeOFF("figura.off");

    return 0;
}
