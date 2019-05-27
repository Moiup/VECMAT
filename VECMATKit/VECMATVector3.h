/**
 * Name : VECMATVector3.h
 * 
 * 
 * Module for vector of size 3
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_VECTOR3_H
#define VECMAT_VECTOR3_H
#include "VECMATTools.h"

#define VEC3_DIM 3  // The number of values
#define VEC3_X 0    // Access the X value
#define VEC3_Y 1    // Access the Y value
#define VEC3_Z 2    // Access the Z value


/***********************************************/
/* Type definitions                            */
/***********************************************/

typedef float VECMATVector3[VEC3_DIM];

/**************************************************/
/* Functions                                      */
/**************************************************/

/**
 * Set all value of `v` to 0
*/
void VECMATVector3Zero(VECMATVector3 v);

/**
 * Create a vector made of the coordinate given
*/
void VECMATVector3Define(VECMATVector3 v, float x, float y, float z);

/**
 * Create a vec3 (result is in `v`)
*/
void VECMATVector3Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector3 v);

/**
 * Create a vec3 already normalized (result in `v`)
*/
void VECMATVector3CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector3 v);

/**
 * Normalize the vector `v`
*/
void VECMATVector3Normalize(VECMATVector3 v);

/**
 * Return the length of the vector `v`
*/
float VECMATVector3Length(VECMATVector3 v);

/**
 * Put in `vn` the orthogonal vector to the plan formed with `v1` and `v2`
*/
void VECMATVector3NormalVector(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 vn);

#endif
