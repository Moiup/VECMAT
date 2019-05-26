/**
 * Name : VECMATVector2.h
 * 
 * 
 * Module for vector of size 2
 * 
 * Auteur : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_VECTOR2_H
#define VECMAT_VECTOR2_H
#include "VECMATTools.h"

#define VEC2_DIM 2  // The number of values
#define VEC2_X 0    // Access the X value
#define VEC2_Y 1    // Access the Y value

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


#endif
