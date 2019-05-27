/**
 * Name : VECMATMatrix2.c
 * 
 * 
 * Module of Matrix of size 2
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#include "VECMATMatrix2.h"

/**
 * Set to 0 all of the matrix values
*/
void VECMATMatrix2Zero(VECMATMatrix2 m)
{
    // First line
    m[0][0] = 0;
    m[0][1] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 0;
}

/**
 * Set the matrix `m`as an identity matrix
*/
void VECMATMatrix2Identity(VECMATMatrix2 m){
    // First line
    m[0][0] = 1;
    m[0][1] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 1;
}

/**
 * Add two matrix, the result is in `res`
*/
void VECMATMatrix2Sum(VECMATMatrix2 m1, VECMATMatrix2 m2, VECMATMatrix2 res)
{   
    // First line
    res[0][0] = m1[0][0] + m2[0][0];
    res[0][1] = m1[0][1] + m2[0][1];
    // Second line
    res[1][0] = m1[1][0] + m2[1][0];
    res[1][1] = m1[1][1] + m2[1][1];
}

/**
 * Multiplication of two matrix, the resulting matrix is in `res`
 * 
 * The multplication is in this form : m1 * m2
*/
void VECMATMatrix2Mult(VECMATMatrix2 m1, VECMATMatrix2 m2, VECMATMatrix2 res)
{
    // First line
    res[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0];
    res[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1];
    // Second line
    res[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0];
    res[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1];
}


