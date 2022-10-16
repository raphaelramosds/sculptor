#include <iostream>
#include "sculptor.h"

int main()
{
    // cria um escultor cuja matriz tem 10x10x10 voxels
    Sculptor trono(10,10,10);
    // para mudar a cor do voxel
    trono.setColor(0,0,1.0,1.0); // azul
    // ativa os voxels na faixa de [x,y,z] pertencendo a [0-9]
    trono.putBox(0,9,0,9,0,9);
    // desativa os voxels na faixa de [x,y,z] pertencendo a [0-9]
    trono.cutBox(1,8,1,9,1,9);
    // grava a escultura digital no arquivo "trono.off"
    trono.writeOFF("trono.off");

    return 0;
}
