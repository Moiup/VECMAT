/**
 * Name : VECMATMatrix3.h
 * 
 * 
 * Module of Matrix of size 3
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_MATRIX3_H
#define VECMAT_MATRIX3_H
#include "VECMATTools.h"

#define MAT3_DIM 3  // The number of values

/***********************************************/
/* Type definitions                            */
/***********************************************/

typedef float VECMATMatrix3[MAT3_DIM][MAT3_DIM];

/**************************************************/
/* Functions                                      */
/**************************************************/

/**
 * Set to 0 all of the matrix values
*/
void VECMATMatrix3Zero(VECMATMatrix3 m);

/**
 * Set the matrix `m`as an identity matrix
*/
void VECMATMatrix3Identity(VECMATMatrix3 m);

/**
 * Add two matrix, the result is in `res`
*/
void VECMATMatrix3Sum(VECMATMatrix3 m1, VECMATMatrix3 m2, VECMATMatrix3 res);

/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix3Mult(VECMATMatrix3 m1, VECMATMatrix3 m2, VECMATMatrix3 res);


#endif
