/**
 * Name : VECMATVector2.h
 * 
 * 
 * Module for vector of size 2
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_VECTOR2_H
#define VECMAT_VECTOR2_H
#include "VECMATTools.h"

#define VEC2_DIM 2 // The number of values
#define VEC2_X 0   // Access the X value
#define VEC2_Y 1   // Access the Y value

#define VEC2_LENGTH(v) (sqrt((v[VEC2_X]) * (v[VEC2_X])) + ((v[VEC2_Y]) * (v[VEC2_Y])))

/***********************************************/
/* Type definitions                            */
/***********************************************/

// Vector 2
typedef float VECMATVector2[VEC2_DIM];

/**************************************************/
/* Functions                                      */
/**************************************************/

/**
 * Set all value of `v` to 0
*/
void VECMATVector2Zero(VECMATVector2 v);

/**
 * Create a vector made of the coordinate given
*/
void VECMATVector2Define(VECMATVector2 v, float x, float y);

/**
 * Create a vec2 (result is in `v`)
*/
void VECMATVector2Create(float p1X, float p1Y, float p2X, float p2Y, VECMATVector2 v);

/**
 * Create a vec2 already normalized (result in `v`)
*/
void VECMATVector2CreateNormalized(float p1X, float p1Y, float p2X, float p2Y, VECMATVector2 v);

/**
 * Normalize the vector `v`
*/
void VECMATVector2Normalize(VECMATVector2 v);

/**
 * Return the length of the vector `v`
*/
float VECMATVector2Length(VECMATVector2 v);

/**
 * Sum of two vectors (result in res)
*/
void VECMATVector2Sum(VECMATVector2 v1, VECMATVector2 v2, VECMATVector2 res);

/**
 * Substraction of two vectors (result in res)
*/
void VECMATVector2Sub(VECMATVector2 v1, VECMATVector2 v2, VECMATVector2 res);

/**
 * Add a scalar to a vector (be careful, you will loose the value of your initial vector)
*/
void VECMATVector2ScalarSum(VECMATVector2 v, float r);

/**
 * Multpiply a vector by a scalar (be careful, you will loose the value of your initial vector)
*/
void VECMATVector2ScalarMult(VECMATVector2 v, float r);

/**
 * Divide a vector by a scalar (be careful, you will loose the value of your initial vector)
*/
void VECMATVector2ScalarDivide(VECMATVector2 v, float r);

#endif
