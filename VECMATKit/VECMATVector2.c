/**
 * Name : VECMATVector2.c
 * 
 * 
 * Module for vector of size 2
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_VECTOR2_C
#define VECMAT_VECTOR2_C
#include "VECMATVector2.h"

/**
 * Set all value of `v` to 0
*/
void VECMATVector2Zero(VECMATVector2 v)
{
    v[VEC2_X] = 0;
    v[VEC2_Y] = 0;
}

/**
 * Create a vector made of the coordinate given
*/
void VECMATVector2Define(VECMATVector2 v, float x, float y)
{
    v[VEC2_X] = x;
    v[VEC2_Y] = y;
}

/**
 * Create a vec2 (result is in `v`)
*/
void VECMATVector2Create(float p1X, float p1Y, float p2X, float p2Y, VECMATVector2 v)
{
    v[VEC2_X] = p2X - p1X;
    v[VEC2_Y] = p2Y - p1Y;
}

/**
 * Copy a vector
*/
void VECMATVector2Copy(VECMATVector2 src, VECMATVector2 dest)
{
    dest[VEC2_X] = src[VEC2_X];
    dest[VEC2_Y] = src[VEC2_Y];
}

/**
 * Create a vec2 already normalized (result in `v`)
*/
void VECMATVector2CreateNormalized(float p1X, float p1Y, float p2X, float p2Y, VECMATVector2 v)
{
    float length;

    // Creating the vector
    v[VEC2_X] = p2X - p1X;
    v[VEC2_Y] = p2Y - p1Y;

    // Getting vector's length
    length = VECMATVector2Length(v);

    if (length != 0)
    {
        // Normalizing the vector
        v[VEC2_X] = v[VEC2_X] / length;
        v[VEC2_Y] = v[VEC2_Y] / length;
    }
}

/**
 * Normalize the vector `v`
*/
void VECMATVector2Normalize(VECMATVector2 v)
{
    // Getting vector's length
    float length = VECMATVector2Length(v);

    if (length != 0)
    {
        // Normalizing the vector
        v[VEC2_X] = v[VEC2_X] / length;
        v[VEC2_Y] = v[VEC2_Y] / length;
    }
}

/**
 * Return the length of the vector `v`
*/
float VECMATVector2Length(VECMATVector2 v)
{
    return sqrt((v[VEC2_X] * v[VEC2_X]) + (v[VEC2_Y] * v[VEC2_Y]));
}

/**
 * Return the dot product between two vectors
*/
int VECMATVector2DotProduct(VECMATVector2 v1, VECMATVector2 v2)
{
    return v1[VEC2_X] * v2[VEC2_X] + v1[VEC2_Y] * v2[VEC2_Y];
}

/**
 * Sum of two vectors (result in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector2Sum(v1, v2, v1);
 * or
 *      VECMATVector2Sum(v1, v2, v2);
*/
void VECMATVector2Sum(VECMATVector2 v1, VECMATVector2 v2, VECMATVector2 res)
{
    res[VEC2_X] = v1[VEC2_X] + v2[VEC2_X];
    res[VEC2_Y] = v1[VEC2_Y] + v2[VEC2_Y];
}

/**
 * Substraction of two vectors (result in res)
 * 
 * v1 - v2
 * 
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector2Sub(v1, v2, v1);
 * or
 *      VECMATVector2Sub(v1, v2, v2);
 * 
*/
void VECMATVector2Sub(VECMATVector2 v1, VECMATVector2 v2, VECMATVector2 res)
{
    res[VEC2_X] = v1[VEC2_X] - v2[VEC2_X];
    res[VEC2_Y] = v1[VEC2_Y] - v2[VEC2_Y];
}

/**
 * Add a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector2ScalarSum(v, v, r);
*/
void VECMATVector2ScalarSum(VECMATVector2 v, VECMATVector2 res, float r)
{
    res[VEC2_X] = v[VEC2_X] + r;
    res[VEC2_Y] = v[VEC2_Y] + r;
}

/**
 * Substract a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector2ScalarSub(v, v, r);
*/
void VECMATVector2ScalarSub(VECMATVector2 v, VECMATVector2 res, float r)
{
    res[VEC2_X] = v[VEC2_X] - r;
    res[VEC2_Y] = v[VEC2_Y] - r;
}

/**
 * Multpiply a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector2ScalarMult(v, v, r);
*/
void VECMATVector2ScalarMult(VECMATVector2 v, VECMATVector2 res, float r)
{
    res[VEC2_X] = v[VEC2_X] * r;
    res[VEC2_Y] = v[VEC2_Y] * r;
}

/**
 * Divide a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector2ScalarDivide(v, v, r);
*/
void VECMATVector2ScalarDivide(VECMATVector2 v, VECMATVector2 res, float r)
{
    res[VEC2_X] = v[VEC2_X] / r;
    res[VEC2_Y] = v[VEC2_Y] / r;
}

#endif
