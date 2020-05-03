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

#define VEC3_DIM 3 // The number of values
#define VEC3_X 0   // Access the X value
#define VEC3_Y 1   // Access the Y value
#define VEC3_Z 2   // Access the Z value
#define VEC3_W 2   // When using homogeneous vector

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
 * The cross product between `v1` and `v2` (result in res)
*/
void VECMATVector3CrossProduct(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 vn);

/**
 * Sum of two vectors (result in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3Sum(v1, v2, v1);
 * or
 *      VECMATVector3Sum(v1, v2, v2);
*/
void VECMATVector3Sum(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 res);

/**
 * Substraction of two vectors (result in res)
 * 
 * v1 - v2
 * 
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3Sub(v1, v2, v1);
 * or
 *      VECMATVector3Sub(v1, v2, v2);
 * 
*/
void VECMATVector3Sub(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 res);

/**
 * Add a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarSum(v, v, r);
*/
void VECMATVector3ScalarSum(VECMATVector3 v, VECMATVector3 res, float r);

/**
 * Substract a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarSub(v, v, r);
*/
void VECMATVector3ScalarSub(VECMATVector3 v, VECMATVector3 res, float r);

/**
 * Multpiply a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarMult(v, v, r);
*/
void VECMATVector3ScalarMult(VECMATVector3 v, VECMATVector3 res, float r);

/**
 * Divide a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarDivide(v, v, r);
*/
void VECMATVector3ScalarDivide(VECMATVector3 v, VECMATVector3 res, float r);

#endif
