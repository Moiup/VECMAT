/**
 * Name : VECMATMatrix4.h
 * 
 * 
 * Module of Matrix of size 4
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_MATRIX4_H
#define VECMAT_MATRIX4_H
#include "VECMATTools.h"

#define MAT4_DIM 4 // The number of values

/***********************************************/
/* Type definitions                            */
/***********************************************/

typedef float VECMATMatrix4[MAT4_DIM][MAT4_DIM];

/**************************************************/
/* Functions                                      */
/**************************************************/

/**
 * Set to 0 all of the matrix values
*/
void VECMATMatrix4Zero(VECMATMatrix4 m);

/**
 * Set the matrix `m`as an identity matrix
*/
void VECMATMatrix4Identity(VECMATMatrix4 m);

/**
 * Add two matrix, the result is in `res`
*/
void VECMATMatrix4Sum(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res);

/**
 * Substract the matrix `m2` to the matrix `m1` (result in res)
*/
void VECMATMatrix4Sub(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res);

/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix4Mult(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res);

#endif
