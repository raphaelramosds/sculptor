#ifndef VOXEL_H
#define VOXEL_H

struct Voxel
{
  float r, g, b;

  /**
   * @details Transparency */

  float a;

  /**
   * @details Specifies if the voxel is Included or not */  

  bool isOn;     
};

#endif // VOXEL_H
