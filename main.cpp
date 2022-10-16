#include <iostream>
#include "sculptor.h"

int main()
{

    Sculptor figura(31,31,31);

    figura.setColor(.3,.2,.8,.2);

    figura.putLine(0,4,1,5,5,10);
    figura.putLine(0,4,-1,5,8,5);


    figura.writeOFF("figura.off");

    return 0;
}
