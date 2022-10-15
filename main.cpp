#include <iostream>
#include "sculptor.h"

int main()
{
    Sculptor FiguraGeometrica(50,50,50);

    FiguraGeometrica.setColor(100,200,300,1.0);
    FiguraGeometrica.putSphere(0,0,10,4);
    FiguraGeometrica.writeOFF("cubo.off");

    return 0;
}
