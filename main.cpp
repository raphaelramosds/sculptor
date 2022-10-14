#include <iostream>
#include "sculptor.h"

int main()
{
    Sculptor FiguraGeometrica(50,50,50);

    FiguraGeometrica.writeOFF("cubo.off");

    return 0;
}
