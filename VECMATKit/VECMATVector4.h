/**
 * Name : VECMATVector4.h
 * 
 * 
 * Module for vector of size 4
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_VECTOR4_H
#define VECMAT_VECTOR4_H
#include "VECMATTools.h"

#define VEC4_DIM 4  // The number of values
#define VEC4_X 0    // Access the X value
#define VEC4_Y 1    // Access the Y value
#define VEC4_Z 2    // Access the Z value
#define VEC4_W 3    // Access the W value, it is the homogeneous value

/***********************************************/
/* Type definitions                            */
/***********************************************/

typedef float VECMATVector4[VEC4_DIM];

/**************************************************/
/* Functions                                      */
/**************************************************/

/**
 * Set all value of `v` to 0
*/
void VECMATVector4Zero(VECMATVector4 v);

/**
 * Create a vector made of the coordinate given
*/
void VECMATVector4Define(VECMATVector4 v, float x, float y, float z, float w);

/**
 * Create a homogeneous vec4 (result is in `v`)
*/
void VECMATVector4Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector4 v);

/**
 * Create a homogeneous vec4 already normalized (result in `v`)
*/
void VECMATVector4CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector4 v);

/**
 * Normalize the vector `v`
*/
void VECMATVector4Normalize(VECMATVector4 v);

/**
 * Return the length of the vector `v`
*/
float VECMATVector4Length(VECMATVector4 v);

/**
 * Put in `vn` the orthogonal vector to the plan formed with `v1` and `v2`
*/
void VECMATVector4VecteurNormal(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 vn);


#endif
