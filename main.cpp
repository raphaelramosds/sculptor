#include <iostream>
#include "sculptor.h"

int main()
{

    Sculptor figura(31,31,31);

    figura.setColor(.3,.2,.1,.2);
    figura.putCylinder(12,5,5,4,12,'x');
    figura.writeOFF("figura.off");

    return 0;
}
