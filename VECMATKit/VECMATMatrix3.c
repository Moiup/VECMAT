/**
 * Name : VECMATMatrix3.c
 * 
 * 
 * Module of Matrix of size 3
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#include "VECMATMatrix3.h"

/**
 * Create a matrix with the value given
*/
void VECMATMatrix3CreateMatrix(VECMATMatrix3 m, float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
{
    // First line
    m[0][0] = m00;
    m[0][1] = m01;
    m[0][2] = m02;
    // Second line
    m[1][0] = m10;
    m[1][1] = m11;
    m[1][2] = m12;
    // Third line
    m[2][0] = m20;
    m[2][1] = m21;
    m[2][2] = m22;
}

/**
 * Set to 0 all of the matrix values
*/
void VECMATMatrix3Zero(VECMATMatrix3 m)
{
    // First line
    m[0][0] = 0;
    m[0][1] = 0;
    m[0][2] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 0;
    m[1][2] = 0;
    // Third line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 0;
}

/**
 * Set the matrix `m`as an identity matrix
*/
void VECMATMatrix3Identity(VECMATMatrix3 m){
    // First line
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    // Thirld line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 1;
}

/**
 * Add two matrix, the result is in `res`
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix3Sum(m1, m2, m1);
 * or
 *      VECMATMatrix3Sum(m1, m2, m2);
 * 
*/
void VECMATMatrix3Sum(VECMATMatrix3 m1, VECMATMatrix3 m2, VECMATMatrix3 res)
{   
    // First line
    res[0][0] = m1[0][0] + m2[0][0];
    res[0][1] = m1[0][1] + m2[0][1];
    res[0][2] = m1[0][2] + m2[0][2];
    // Second line
    res[1][0] = m1[1][0] + m2[1][0];
    res[1][1] = m1[1][1] + m2[1][1];
    res[1][2] = m1[1][2] + m2[1][2];
    // Third line
    res[2][0] = m1[2][0] + m2[2][0];
    res[2][1] = m1[2][1] + m2[2][1];
    res[2][2] = m1[2][2] + m2[2][2];
}

/**
 * Substract the matrix `m2` to the matrix `m1` (result in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix3Sub(m1, m2, m1);
 * or
 *      VECMATMatrix3Sub(m1, m2, m2);
 * 
*/
void VECMATMatrix3Sub(VECMATMatrix3 m1, VECMATMatrix3 m2, VECMATMatrix3 res)
{
    // First line
    res[0][0] = m1[0][0] - m2[0][0];
    res[0][1] = m1[0][1] - m2[0][1];
    res[0][2] = m1[0][2] - m2[0][2];
    // Second line
    res[1][0] = m1[1][0] - m2[1][0];
    res[1][1] = m1[1][1] - m2[1][1];
    res[1][2] = m1[1][2] - m2[1][2];
    // Third line
    res[2][0] = m1[2][0] - m2[2][0];
    res[2][1] = m1[2][1] - m2[2][1];
    res[2][2] = m1[2][2] - m2[2][2];
}


/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix3Mult(VECMATMatrix3 m1, VECMATMatrix3 m2, VECMATMatrix3 res)
{
    // First line
    res[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0] + m1[0][2] * m2[2][0];
    res[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1] + m1[0][2] * m2[2][1];
    res[0][2] = m1[0][0] * m2[0][2] + m1[0][1] * m2[1][2] + m1[0][2] * m2[2][2];
    // Second line
    res[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0] + m1[1][2] * m2[2][0];
    res[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1] + m1[1][2] * m2[2][1];
    res[1][2] = m1[1][0] * m2[0][2] + m1[1][1] * m2[1][2] + m1[1][2] * m2[2][2];
    // Third line
    res[2][0] = m1[2][0] * m2[0][0] + m1[2][1] * m2[1][0] + m1[2][2] * m2[2][0];
    res[2][1] = m1[2][0] * m2[0][1] + m1[2][1] * m2[1][1] + m1[2][2] * m2[2][1];
    res[2][2] = m1[2][0] * m2[0][2] + m1[2][1] * m2[1][2] + m1[2][2] * m2[2][2];
}

/**
 * Add a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix3ScalarSum(m, m, r);
*/
void VECMATMatrix3ScalarSum(VECMATMatrix3 m, VECMATMatrix3 res, float r)
{
    // First line
    res[0][0] = m[0][0] + r;
    res[0][1] = m[0][1] + r;
    res[0][2] = m[0][2] + r;
    // Second line
    res[1][0] = m[1][0] + r;
    res[1][1] = m[1][1] + r;
    res[1][2] = m[1][2] + r;
    // Third line
    res[2][0] = m[2][0] + r;
    res[2][1] = m[2][1] + r;
    res[2][2] = m[2][2] + r;
}

/**
 * Substract a scalar to a matrix (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix3ScalarSub(m, m, r);
*/
void VECMATMatrix3ScalarSub(VECMATMatrix3 m, VECMATMatrix3 res, float r)
{
    // First line
    res[0][0] = m[0][0] - r;
    res[0][1] = m[0][1] - r;
    res[0][2] = m[0][2] - r;
    // Second line
    res[1][0] = m[1][0] - r;
    res[1][1] = m[1][1] - r;
    res[1][2] = m[1][2] - r;
    // Third line
    res[2][0] = m[2][0] - r;
    res[2][1] = m[2][1] - r;
    res[2][2] = m[2][2] - r;
}

/**
 * Multiply a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix4ScalarMult(m, m, r);
*/
void VECMATMatrix3ScalarMult(VECMATMatrix3 m, VECMATMatrix3 res, float r)
{
    // First line
    res[0][0] = m[0][0] * r;
    res[0][1] = m[0][1] * r;
    res[0][2] = m[0][2] * r;
    // Second line
    res[1][0] = m[1][0] * r;
    res[1][1] = m[1][1] * r;
    res[1][2] = m[1][2] * r;
    // Third line
    res[2][0] = m[2][0] * r;
    res[2][1] = m[2][1] * r;
    res[2][2] = m[2][2] * r;
}

/**
 * Divide a matrix by a scalar (result is in res)
 * 
 * If you don't want to store the result in a new matrix, call the function like this :
 *      VECMATMatrix3ScalarDivide(m, m, r);
*/
void VECMATMatrix3ScalarDivide(VECMATMatrix3 m, VECMATMatrix3 res, float r)
{
    // First line
    res[0][0] = m[0][0] / r;
    res[0][1] = m[0][1] / r;
    res[0][2] = m[0][2] / r;
    // Second line
    res[1][0] = m[1][0] / r;
    res[1][1] = m[1][1] / r;
    res[1][2] = m[1][2] / r;
    // Third line
    res[2][0] = m[2][0] / r;
    res[2][1] = m[2][1] / r;
    res[2][2] = m[2][2] / r;
}


