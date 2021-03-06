/**
 * Name : VECMATMatrix4.c
 * 
 * 
 * Module of Matrix of size 4
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_MATRIX4_C
#define VECMAT_MATRIX4_C
#include "VECMATMatrix4.h"

/**
 * Create a matrix with the value given
*/
void VECMATMatrix4CreateMatrix(VECMATMatrix4 m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
{
    // First line
    m[0][0] = m00;
    m[0][1] = m01;
    m[0][2] = m02;
    m[0][3] = m03;
    // Second line
    m[1][0] = m10;
    m[1][1] = m11;
    m[1][2] = m12;
    m[1][3] = m13;
    // Third line
    m[2][0] = m20;
    m[2][1] = m21;
    m[2][2] = m22;
    m[2][3] = m23;
    // Fourth line
    m[3][0] = m30;
    m[3][1] = m31;
    m[3][2] = m32;
    m[3][3] = m33;
}

/**
 * Set to 0 all of the matrix values
*/
void VECMATMatrix4Zero(VECMATMatrix4 m)
{
    // First line
    m[0][0] = 0;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 0;
    m[1][2] = 0;
    m[1][3] = 0;
    // Third line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 0;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 0;
}

/**
 * Set the matrix `m`as an identity matrix
 * w is the homogeneous value
*/
void VECMATMatrix4Identity(VECMATMatrix4 m, float w)
{
    // First line
    m[0][0] = w;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = w;
    m[1][2] = 0;
    m[1][3] = 0;
    // Thirld line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = w;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = w;
}

/**
 * Add two matrix, the result is in `res`
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4Sum(m1, m2, m1);
 * or
 *      VECMATMatrix4Sum(m1, m2, m2);
 * 
*/
void VECMATMatrix4Sum(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res)
{
    // First line
    res[0][0] = m1[0][0] + m2[0][0];
    res[0][1] = m1[0][1] + m2[0][1];
    res[0][2] = m1[0][2] + m2[0][2];
    res[0][3] = m1[0][3] + m2[0][3];
    // Second line
    res[1][0] = m1[1][0] + m2[1][0];
    res[1][1] = m1[1][1] + m2[1][1];
    res[1][2] = m1[1][2] + m2[1][2];
    res[1][3] = m1[1][3] + m2[1][3];
    // Third line
    res[2][0] = m1[2][0] + m2[2][0];
    res[2][1] = m1[2][1] + m2[2][1];
    res[2][2] = m1[2][2] + m2[2][2];
    res[2][3] = m1[2][3] + m2[2][3];
    // Fourth line
    res[3][0] = m1[3][0] + m2[3][0];
    res[3][1] = m1[3][1] + m2[3][1];
    res[3][2] = m1[3][2] + m2[3][2];
    res[3][3] = m1[3][3] + m2[3][3];
}

/**
 * Substract the matrix `m2` to the matrix `m1` (result in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4Sub(m1, m2, m1);
 * or
 *      VECMATMatrix4Sub(m1, m2, m2);
 * 
*/
void VECMATMatrix4Sub(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res)
{
    // First line
    res[0][0] = m1[0][0] - m2[0][0];
    res[0][1] = m1[0][1] - m2[0][1];
    res[0][2] = m1[0][2] - m2[0][2];
    res[0][3] = m1[0][3] - m2[0][3];
    // Second line
    res[1][0] = m1[1][0] - m2[1][0];
    res[1][1] = m1[1][1] - m2[1][1];
    res[1][2] = m1[1][2] - m2[1][2];
    res[1][3] = m1[1][3] - m2[1][3];
    // Third line
    res[2][0] = m1[2][0] - m2[2][0];
    res[2][1] = m1[2][1] - m2[2][1];
    res[2][2] = m1[2][2] - m2[2][2];
    res[2][3] = m1[2][3] - m2[2][3];
    // Fourth line
    res[3][0] = m1[3][0] - m2[3][0];
    res[3][1] = m1[3][1] - m2[3][1];
    res[3][2] = m1[3][2] - m2[3][2];
    res[3][3] = m1[3][3] - m2[3][3];
}

/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix4Mult(VECMATMatrix4 m1, VECMATMatrix4 m2, VECMATMatrix4 res)
{
    // First line
    res[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0] + m1[0][2] * m2[2][0] + m1[0][3] * m2[3][0];
    res[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1] + m1[0][2] * m2[2][1] + m1[0][3] * m2[3][1];
    res[0][2] = m1[0][0] * m2[0][2] + m1[0][1] * m2[1][2] + m1[0][2] * m2[2][2] + m1[0][3] * m2[3][2];
    res[0][3] = m1[0][0] * m2[0][3] + m1[0][1] * m2[1][3] + m1[0][2] * m2[2][3] + m1[0][3] * m2[3][3];
    // Second line
    res[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0] + m1[1][2] * m2[2][0] + m1[1][3] * m2[3][0];
    res[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1] + m1[1][2] * m2[2][1] + m1[1][3] * m2[3][1];
    res[1][2] = m1[1][0] * m2[0][2] + m1[1][1] * m2[1][2] + m1[1][2] * m2[2][2] + m1[1][3] * m2[3][2];
    res[1][3] = m1[1][0] * m2[0][3] + m1[1][1] * m2[1][3] + m1[1][2] * m2[2][3] + m1[1][3] * m2[3][3];
    // Third line
    res[2][0] = m1[2][0] * m2[0][0] + m1[2][1] * m2[1][0] + m1[2][2] * m2[2][0] + m1[2][3] * m2[3][0];
    res[2][1] = m1[2][0] * m2[0][1] + m1[2][1] * m2[1][1] + m1[2][2] * m2[2][1] + m1[2][3] * m2[3][1];
    res[2][2] = m1[2][0] * m2[0][2] + m1[2][1] * m2[1][2] + m1[2][2] * m2[2][2] + m1[2][3] * m2[3][2];
    res[2][3] = m1[2][0] * m2[0][3] + m1[2][1] * m2[1][3] + m1[2][2] * m2[2][3] + m1[2][3] * m2[3][3];
    // Fourth line
    res[3][0] = m1[3][0] * m2[0][0] + m1[3][1] * m2[1][0] + m1[3][2] * m2[2][0] + m1[3][3] * m2[3][0];
    res[3][1] = m1[3][0] * m2[0][1] + m1[3][1] * m2[1][1] + m1[3][2] * m2[2][1] + m1[3][3] * m2[3][1];
    res[3][2] = m1[3][0] * m2[0][2] + m1[3][1] * m2[1][2] + m1[3][2] * m2[2][2] + m1[3][3] * m2[3][2];
    res[3][3] = m1[3][0] * m2[0][3] + m1[3][1] * m2[1][3] + m1[3][2] * m2[2][3] + m1[3][3] * m2[3][3];
}


/**
 * Add a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarSum(m, m, r);
*/
void VECMATMatrix4ScalarSum(VECMATMatrix4 m, VECMATMatrix4 res, float r)
{
    // First line
    res[0][0] = m[0][0] + r;
    res[0][1] = m[0][1] + r;
    res[0][2] = m[0][2] + r;
    res[0][3] = m[0][3] + r;
    // Second line
    res[1][0] = m[1][0] + r;
    res[1][1] = m[1][1] + r;
    res[1][2] = m[1][2] + r;
    res[1][3] = m[1][3] + r;
    // Third line
    res[2][0] = m[2][0] + r;
    res[2][1] = m[2][1] + r;
    res[2][2] = m[2][2] + r;
    res[2][3] = m[2][3] + r;
    // Fourth line
    res[3][0] = m[3][0] + r;
    res[3][1] = m[3][1] + r;
    res[3][2] = m[3][2] + r;
    res[3][3] = m[3][3] + r;
}

/**
 * Substract a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarSub(m, m, r);
*/
void VECMATMatrix4ScalarSub(VECMATMatrix4 m, VECMATMatrix4 res, float r)
{
    // First line
    res[0][0] = m[0][0] - r;
    res[0][1] = m[0][1] - r;
    res[0][2] = m[0][2] - r;
    res[0][3] = m[0][3] - r;
    // Second line
    res[1][0] = m[1][0] - r;
    res[1][1] = m[1][1] - r;
    res[1][2] = m[1][2] - r;
    res[1][3] = m[1][3] - r;
    // Third line
    res[2][0] = m[2][0] - r;
    res[2][1] = m[2][1] - r;
    res[2][2] = m[2][2] - r;
    res[2][3] = m[2][3] - r;
    // Fourth line
    res[3][0] = m[3][0] - r;
    res[3][1] = m[3][1] - r;
    res[3][2] = m[3][2] - r;
    res[3][3] = m[3][3] - r;
}

/**
 * Multiply a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarMult(m, m, r);
*/
void VECMATMatrix4ScalarMult(VECMATMatrix4 m, VECMATMatrix4 res, float r)
{
    // First line
    res[0][0] = m[0][0] * r;
    res[0][1] = m[0][1] * r;
    res[0][2] = m[0][2] * r;
    res[0][3] = m[0][3] * r;
    // Second line
    res[1][0] = m[1][0] * r;
    res[1][1] = m[1][1] * r;
    res[1][2] = m[1][2] * r;
    res[1][3] = m[1][3] * r;
    // Third line
    res[2][0] = m[2][0] * r;
    res[2][1] = m[2][1] * r;
    res[2][2] = m[2][2] * r;
    res[2][3] = m[2][3] * r;
    // Fourth line
    res[3][0] = m[3][0] * r;
    res[3][1] = m[3][1] * r;
    res[3][2] = m[3][2] * r;
    res[3][3] = m[3][3] * r;
}

/**
 * Divide a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarDivide(m, m, r);
*/
void VECMATMatrix4ScalarDivide(VECMATMatrix4 m, VECMATMatrix4 res, float r)
{
    // First line
    res[0][0] = m[0][0] / r;
    res[0][1] = m[0][1] / r;
    res[0][2] = m[0][2] / r;
    res[0][3] = m[0][3] / r;
    // Second line
    res[1][0] = m[1][0] / r;
    res[1][1] = m[1][1] / r;
    res[1][2] = m[1][2] / r;
    res[1][3] = m[1][3] / r;
    // Third line
    res[2][0] = m[2][0] / r;
    res[2][1] = m[2][1] / r;
    res[2][2] = m[2][2] / r;
    res[2][3] = m[2][3] / r;
    // Fourth line
    res[3][0] = m[3][0] / r;
    res[3][1] = m[3][1] / r;
    res[3][2] = m[3][2] / r;
    res[3][3] = m[3][3] / r;
}

/**
 * Multplie the matrix with a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATMatrix4VecMult(m, vec4, vec4);
*/
void VECMATMatrix4VecMult(VECMATMatrix4 m, VECMATVector4 vec4, VECMATVector4 res)
{
    VECMATVector4 vec4_tmp;

    vec4_tmp[VEC4_X] = vec4[VEC4_X];
    vec4_tmp[VEC4_Y] = vec4[VEC4_Y];
    vec4_tmp[VEC4_Z] = vec4[VEC4_Z];
    vec4_tmp[VEC4_W] = vec4[VEC4_W];

    // First line
    res[VEC4_X] = m[0][0] * vec4_tmp[VEC4_X] + m[0][1] * vec4_tmp[VEC4_Y] + m[0][2] * vec4_tmp[VEC4_Z] + m[0][3] * vec4_tmp[VEC4_W];
    // Second line
    res[VEC4_Y] = m[1][0] * vec4_tmp[VEC4_X] + m[1][1] * vec4_tmp[VEC4_Y] + m[1][2] * vec4_tmp[VEC4_Z] + m[1][3] * vec4_tmp[VEC4_W];
    // Third line
    res[VEC4_Z] = m[2][0] * vec4_tmp[VEC4_X] + m[2][1] * vec4_tmp[VEC4_Y] + m[2][2] * vec4_tmp[VEC4_Z] + m[2][3] * vec4_tmp[VEC4_W];
    // Fourth line
    res[VEC4_W] = m[3][0] * vec4_tmp[VEC4_X] + m[3][1] * vec4_tmp[VEC4_Y] + m[3][2] * vec4_tmp[VEC4_Z] + m[3][3] * vec4_tmp[VEC4_W];
}

#endif
