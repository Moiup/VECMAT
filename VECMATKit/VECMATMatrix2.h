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
 * Create a matrix with the value given
*/
void VECMATMatrix2CreateMatrix(VECMATMatrix2 m, float m00, float m01, float m10, float m11);

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
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix2Sum(m1, m2, m1);
 * or
 *      VECMATMatrix2Sum(m1, m2, m2);
 * 
*/
void VECMATMatrix2Sum(VECMATMatrix2 m1, VECMATMatrix2 m2, VECMATMatrix2 res);

/**
 * Substract the matrix `m2` to the matrix `m1` (result in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix2Sub(m1, m2, m1);
 * or
 *      VECMATMatrix2Sub(m1, m2, m2);
 * 
*/
void VECMATMatrix2Sub(VECMATMatrix2 m1, VECMATMatrix2 m2, VECMATMatrix2 res);

/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix2Mult(VECMATMatrix2 m1, VECMATMatrix2 m2, VECMATMatrix2 res);


/**
 * Add a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix2ScalarSum(m, m, r);
*/
void VECMATMatrix2ScalarSum(VECMATMatrix2 m, VECMATMatrix2 res, float r);

/**
 * Substract a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix2ScalarSub(m, m, r);
*/
void VECMATMatrix2ScalarSub(VECMATMatrix2 m, VECMATMatrix2 res, float r);

/**
 * Multiply a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix2ScalarMult(m, m, r);
*/
void VECMATMatrix2ScalarMult(VECMATMatrix2 m, VECMATMatrix2 res, float r);

/**
 * Divide a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix2ScalarDivide(m, m, r);
*/
void VECMATMatrix2ScalarDivide(VECMATMatrix2 m, VECMATMatrix2 res, float r);

#endif
