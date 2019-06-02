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

#define VEC4_LENGTH(v) (sqrt((v[VEC4_X]) * (v[VEC4_X])) + ((v[VEC4_Y]) * (v[VEC4_Y])) + ((v[VEC4_Z]) * (v[VEC4_Z])))


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
 * The cross product between `v1` and `v2` (result in res)
*/
void VECMATVector4CrossProduct(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 vn);

/**
 * Sum of two vectors (result in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector4Sum(v1, v2, v1);
 * or
 *      VECMATVector4Sum(v1, v2, v2);
*/
void VECMATVector4Sum(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 res);

/**
 * Substraction of two vectors (result in res)
 * 
 * v1 - v2
 * 
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector4Sub(v1, v2, v1);
 * or
 *      VECMATVector4Sub(v1, v2, v2);
 * 
*/
void VECMATVector4Sub(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 res);

/**
 * Add a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector4ScalarSum(v, v, r);
*/
void VECMATVector4ScalarSum(VECMATVector4 v, VECMATVector4 res, float r);

/**
 * Substract a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector4ScalarSub(v, v, r);
*/
void VECMATVector4ScalarSub(VECMATVector4 v, VECMATVector4 res, float r);

/**
 * Multpiply a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector4ScalarMult(v, v, r);
*/
void VECMATVector4ScalarMult(VECMATVector4 v, VECMATVector4 res, float r);

/**
 * Divide a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector4ScalarMult(v, v, r);
*/
void VECMATVector4ScalarDivide(VECMATVector4 v, VECMATVector4 res, float r);

#endif
