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


