<h1 style = "text-align:center">Sculptor</h1>

<div style="margin: 0 auto; width: 300px;">
    <table>
        <tr><th style="text-align:center">Keven</th></tr>
        <tr>
            <td><img src="./assets/keven.png" style="width:300px"/></td>
        </tr>
    </table>
</div>

## Introduction

Sculptor is a Library for drawing sculptures with volume elements (voxels). Above a little sample of the minion Keven, drown by me with Sculptor. Briefly, Sculptor allocates a 3D matrix of type `Voxel`, a struct, dinamically and allows the user access any wished index of this matrix with `v[x][y][z]`. Once it's done, the user can put/cut an voxel, a box, an ellipsoid and a sphere on any position bounded by the limits `nx`, `ny` and `nz`, which represents lines, columns and planes of the matrix `Voxel*** v;`, respectively.

## How to use

You can also use this class. Just clone this repository and see the documentation, available on [Scultpor](#)