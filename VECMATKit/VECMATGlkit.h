/**
 * Name : VECMATGlkit.h
 * 
 * 
 * Module of matrix and vector to be used with OpenGL
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_GLKIT_H
#define VECMAT_GLKIT_H
// Tools' include
#include "VECMATTools.h"
// Vectors'includes
#include "VECMATVector2.h"
#include "VECMATVector3.h"
#include "VECMATVector4.h"
// MAtrixes' includes
#include "VECMATMatrix2.h"
#include "VECMATMatrix3.h"
#include "VECMATMatrix4.h"

/**
 * Create the translation matrix (result in m)
*/
void VECMATMatrix4CreateTranslation(VECMATMatrix4 m, float tx, float ty, float tz);

/**
* Translate the matris `init` (result in matrix in res)
*/
void VECMATMatrix4MakeTranslation(VECMATMatrix4 init, VECMATMatrix4 res, float tx, float ty, float tz);

/**
 * Create the scaling matrix
*/
void VECMATMatrix4CreateScale(VECMATMatrix4 m, float Sx, float Sy, float Sz);

/**
 * Put in `projection` the matrix of the Perspective projection
 * 
 * `angle` is the angle in degree
*/
void VECMATMatrix4ProjectionPerspective(float ratio, float angle, float Znear, float Zfar, VECMATMatrix4 projection);

/**
 * Put in `look` the resulting look at matrix
 * 
 * How this matrix is calculated :
 * http://ogldev.atspace.co.uk/www/tutorial13/tutorial13.html
*/
void VECMATMatrix4LookAt(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, VECMATMatrix4 look);
#endif
