#include <iostream>
#include "voxel.h"
#include "sculptor.h"

int main()
{
    Sculptor FiguraGeometrica(50,50,50);

    FiguraGeometrica.putBox(10,10,10,10,10,10);
    FiguraGeometrica.writeOFF("cubo.off");

    return 0;
}
