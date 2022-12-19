<h1 align="center">Sculptor</h1>

<div align="center">

| Sample - Keven | 
| :---: |
| <img src="./assets/keven.png" style="width:400px"/> |

</div>

## Introduction

Sculptor is a Library for drawing sculptures with volume elements (voxels). Above a little sample of the minion Keven, drown by me with Sculptor. 

Briefly, Sculptor allocates a 3D matrix of type Voxel dinamically and allows the user access any wished index of this matrix with `v[x][y][z]`. Once it's done, the user can put/cut an voxel, a box, an ellipsoid and a sphere on any position bounded by the limits `nx`, `ny` and `nz`, which represents lines, columns and planes of the matrix, respectively.

## Applications

This class was used for builting a interpreter and an interface where the user can draw any wished sculpture with 2D matrixes which represents its interceptions planes. You can see the repositories and documentations behind these applications on [Sculptor's main page](https://raphaelramosds.github.io/sculptor/)
