# VECMATKit
## Description
VECMATKit provides tools for developping OpenGL programmes with C language. The goal here is to fill the lack of library of vectors and matrixes in C. Even if the GLKit exits, it is Apple only. Other languages (C++, JavaScript) have GLM which gives the necessary tools for manipulating matrixes with OpenGL.

## Notes
1. This library is developped for OpenGL purpose, it does not have the ambition to be a complete matrix/vector library for complex maths and physics programmes.
2. Work is in progress, lot of things may change in a near future.
3. Do not hesitate for any suggestion :
    * Code improvement (the goal is not to have a clean code, but a fast execution time)
    * New features : functions, types, structures
    * Anything that comes to your mind that can improve this kit

# How to
If you want to use this library in your project, you just need to include the file VECMATGlkit.h (found in VECMATKit folder), and generate the .o file.

You can, instead of including VECMATGlkit.h file, include VECMATGlkit.c, then you won't need to generate the .o file corresponding.

_____________
# [Doc](./Doc/VECMATKit.md)

The VECMAT library gots 3 main parts.

* [Vector](./Doc/VECMATVector/VECMATVector.md)
* [Matrix](./Doc/VECMATMatrix/VECMATMatrix.md)
* [VECMAT Gl Kit](./Doc/VECMATGlkit/VECMATGlkit.md)

## [Vector](./Doc/VECMATVector/VECMATVector.md)

A vector is an array of a given size.

Each vectors' type contains the same functions (of course, they are adapted for each size). Thera are 3 kinds of vectors :

* [VECMATVector2](./Doc/VECMATVector/VECMATVector2.md) : vector of size 2 (x, y)
* [VECMATVector3](./Doc/VECMATVector/VECMATVector3.md) : vector of size 3 (x, y, z)
* [VECMATVector4](./Doc/VECMATVector/VECMATVector4.md) : vector of size 4 (x, y, z, w)

## [Matrix](./Doc/VECMATMatrix/VECMATMatrix.md)

An array of arrays, of a given size.

All types of matrixes are square matrixes.

Each matrix type contains the same functions (adapted for each size). There are 3 kinds of vectors :

* [VECMATMatrix2](./Doc/VECMATMatrix/VECMATMatrix2.md) : matrix of size 2
* [VECMATMatrix3](./Doc/VECMATMatrix/VECMATMatrix3.md) : matrix of size 3
* [VECMATMatrix4](./Doc/VECMATMatrix/VECMATMatrix4.md) : matrix of size 4

## [VECMAT Gl Kit](./Doc/VECMATGlkit/VECMATGlkit.md)

Contains a set of functions for creating the matrixes used by OpenGL.
		
* [VECMATGlkit](./Doc/VECMATGlkit/VECMATGlkit.md)
