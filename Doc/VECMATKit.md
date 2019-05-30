[Main menu](../Readme.md)

# [Doc](./VECMATKit.md)
## Description
VECMATKit provides tools for developping OpenGL programmes with C language. The goal here is to fill the lack of library of vectors and matrixes in C. Even if the GLKit exits, it is Apple only. Other languages (C++, JavaScript) have GLM which gives the tools necessary for manipulating matrixes with OpenGL.

The VECMAT library gots 3 main parts.

* [Vector](./VECMATVector/VECMATVector.md)
* [Matrix](./VECMATMatrix/VECMATMatrix.md)
* [VECMAT Gl Kit](./VECMATGlkit/VECMATGlkit.md)

## [Vector](./VECMATVector/VECMATVector.md)

A vector is an array of a given size.

Each vectors' type contains the same functions (of course, they are adapted for each size). There are 3 kinds of vectors :
* [VECMATVector2](./VECMATVector/VECMATVector2.md) : vector of size 2 (x, y)
* [VECMATVector3](./VECMATVector/VECMATVector3.md) : vector of size 3 (x, y, z)
* [VECMATVector4](./VECMATVector/VECMATVector4.md) : vector of size 4 (x, y, z, w)

## [Matrix](./VECMATMatrix/VECMATMatrix.md)

An array of arrays, of a given size.

All types of matrixes are square matrixes.

Each matrix type contains the same functions (adapted for each size). There are 3 kinds of vectors :
* [VECMATMatrix2](VECMATMatrix2.md) : matrix of size 2
* [VECMATMatrix3](VECMATMatrix3.md) : matrix of size 3
* [VECMATMatrix4](VECMATMatrix4.md) : matrix of size 4

## [VECMAT Gl Kit](./VECMATGlkit/VECMATGlkit.md)

Contains a set of functions for creating the matrixes used by OpenGL.

* [VECMAT Gl Kit](./VECMATGlkit/VECMATGlkit.md)
