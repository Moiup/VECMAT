/**
 * Name : VECMATMatrix4.c
 * 
 * 
 * Module of Matrix of size 4
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
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
*/
void VECMATMatrix4Identity(VECMATMatrix4 m)
{
    // First line
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = 0;
    // Thirld line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 1;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}

/**
 * Add two matrix, the result is in `res`
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
