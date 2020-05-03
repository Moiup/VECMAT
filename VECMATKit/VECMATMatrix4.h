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
#include "VECMATVector4.h"

#define MAT4_DIM 4  // The number of values

/***********************************************/
/* Type definitions                            */
/***********************************************/

typedef float VECMATMatrix4[MAT4_DIM][MAT4_DIM];

/**************************************************/
/* Functions                                      */
/**************************************************/

/**
 * Create a matrix with the value given
*/
void VECMATMatrix4CreateMatrix(VECMATMatrix4 m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33);

/**
 * Set to 0 all of the matrix values
*/
void VECMATMatrix4Zero(VECMATMatrix4 m);

/**
 * Set the matrix `m`as an identity matrix
 * w is the homogeneous value
*/
void VECMATMatrix4Identity(VECMATMatrix4 m, float w);

/**
 * Add two matrix, the result is in `res`
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4Sum(m1, m2, m1);
 * or
 *      VECMATMatrix4Sum(m1, m2, m2);
 * 
*/
void VECMATMatrix4Sum(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res);

/**
 * Substract the matrix `m2` to the matrix `m1` (result in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4Sub(m1, m2, m1);
 * or
 *      VECMATMatrix4Sub(m1, m2, m2);
 * 
*/
void VECMATMatrix4Sub(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res);

/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix4Mult(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res);

/**
 * Add a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarSum(m, m, r);
*/
void VECMATMatrix4ScalarSum(VECMATMatrix4 m, VECMATMatrix4 res, float r);

/**
 * Substract a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarSub(m, m, r);
*/
void VECMATMatrix4ScalarSub(VECMATMatrix4 m, VECMATMatrix4 res, float r);

/**
 * Multiply a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarMult(m, m, r);
*/
void VECMATMatrix4ScalarMult(VECMATMatrix4 m, VECMATMatrix4 res, float r);

/**
 * Divide a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarDivide(m, m, r);
*/
void VECMATMatrix4ScalarDivide(VECMATMatrix4 m, VECMATMatrix4 res, float r);

/**
 * Multplie the matrix with a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATMatrix4VecMult(m, vec4, vec4);
*/
void VECMATMatrix4VecMult(VECMATMatrix4 m, VECMATVector4 vec4, VECMATVector4 res);

#endif
