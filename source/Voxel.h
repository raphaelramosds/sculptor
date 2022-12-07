#ifndef VOXEL_H
#define VOXEL_H

/**
 * @brief Voxel is the fundamental struct of Sculptor class
 * @details This struct allows you to control the colors, transparency and existence or not of a voxel whose dimension is `1 x 1 x 1`
 * */

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
