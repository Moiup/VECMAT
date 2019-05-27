/**
 * Name : VECMATMatrix2.h
 * 
 * 
 * Module of Matrix of size 2
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_MATRIX2_H
#define VECMAT_MATRIX2_H
#include "VECMATTools.h"

#define MAT2_DIM 2  // The number of values

/***********************************************/
/* Type definitions                            */
/***********************************************/

typedef float VECMATMatrix2[MAT2_DIM][MAT2_DIM];

/**************************************************/
/* Functions                                      */
/**************************************************/

/**
 * Set to 0 all of the matrix values
*/
void VECMATMatrix2Zero(VECMATMatrix2 m);

/**
 * Set the matrix `m`as an identity matrix
*/
void VECMATMatrix2Identity(VECMATMatrix2 m);

/**
 * Add two matrix, the result is in `res`
*/
void VECMATMatrix2Sum(VECMATMatrix2 m1, VECMATMatrix2 m2, VECMATMatrix2 res);

/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix2Mult(VECMATMatrix2 m1, VECMATMatrix2 m2, VECMATMatrix2 res);


#endif
