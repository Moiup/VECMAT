/**
 * Name : VECMATVector3.c
 * 
 * 
 * Module for vector of size 3
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECMAT_VECTOR3_C
#define VECMAT_VECTOR3_C
#include "VECMATVector3.h"

/**
 * Set all value of `v` to 0
*/
void VECMATVector3Zero(VECMATVector3 v)
{
    v[VEC3_X] = 0;
    v[VEC3_Y] = 0;
    v[VEC3_Z] = 0;
}

/**
 * Create a vector made of the coordinate given
*/
void VECMATVector3Define(VECMATVector3 v, float x, float y, float z)
{
    v[VEC3_X] = x;
    v[VEC3_Y] = y;
    v[VEC3_Z] = z;
}

/**
 * Create a vec3 (result is in `v`)
*/
void VECMATVector3Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector3 v)
{
    v[VEC3_X] = p2X - p1X;
    v[VEC3_Y] = p2Y - p1Y;
    v[VEC3_Z] = p2Z - p1Z;
}

/**
 * Create a vec3 already normalized (result in `v`)
*/
void VECMATVector3CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector3 v)
{
    float length;

    // Creating the vector
    v[VEC3_X] = p2X - p1X;
    v[VEC3_Y] = p2Y - p1Y;
    v[VEC3_Z] = p2Z - p1Z;

    // Getting vector's length
    length = VECMATVector3Length(v);

    if (length != 0)
    {
        // Normalizing the vector
        v[VEC3_X] = v[VEC3_X] / length;
        v[VEC3_Y] = v[VEC3_Y] / length;
        v[VEC3_Z] = v[VEC3_Z] / length;
    }
}

/**
 * Normalize the vector `v`
*/
void VECMATVector3Normalize(VECMATVector3 v)
{
    // Getting vector's length
    float length = VECMATVector3Length(v);

    if (length != 0)
    {
        // Normalizing the vector
        v[VEC3_X] = v[VEC3_X] / length;
        v[VEC3_Y] = v[VEC3_Y] / length;
        v[VEC3_Z] = v[VEC3_Z] / length;
    }
}

/**
 * Return the length of the vector `v`
*/
float VECMATVector3Length(VECMATVector3 v)
{
    return sqrt((v[VEC3_X] * v[VEC3_X]) + (v[VEC3_Y] * v[VEC3_Y]) + (v[VEC3_Z] * v[VEC3_Z]));
}

/**
 * The cross product between `v1` and `v2` (result in res)
*/
void VECMATVector3CrossProduct(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 vn)
{
    vn[VEC3_X] = v1[VEC3_Y] * v2[VEC3_Z] - v1[VEC3_Z] * v2[VEC3_Y];
    vn[VEC3_Y] = v1[VEC3_Z] * v2[VEC3_X] - v1[VEC3_X] * v2[VEC3_Z];
    vn[VEC3_Z] = v1[VEC3_X] * v2[VEC3_Y] - v1[VEC3_Y] * v2[VEC3_X];
}

/**
 * Sum of two vectors (result in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3Sum(v1, v2, v1);
 * or
 *      VECMATVector3Sum(v1, v2, v2);
*/
void VECMATVector3Sum(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 res)
{
    res[VEC3_X] = v1[VEC3_X] + v2[VEC3_X];
    res[VEC3_Y] = v1[VEC3_Y] + v2[VEC3_Y];
    res[VEC3_Z] = v1[VEC3_Z] + v2[VEC3_Z];
}

/**
 * Substraction of two vectors (result in res)
 * 
 * v1 - v2
 * 
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3Sub(v1, v2, v1);
 * or
 *      VECMATVector3Sub(v1, v2, v2);
 * 
*/
void VECMATVector3Sub(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 res)
{
    res[VEC3_X] = v1[VEC3_X] - v2[VEC3_X];
    res[VEC3_Y] = v1[VEC3_Y] - v2[VEC3_Y];
    res[VEC3_Z] = v1[VEC3_Z] - v2[VEC3_Z];
}

/**
 * Add a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarSum(v, v, r);
*/
void VECMATVector3ScalarSum(VECMATVector3 v, VECMATVector3 res, float r)
{
    res[VEC3_X] = v[VEC3_X] + r;
    res[VEC3_Y] = v[VEC3_Y] + r;
    res[VEC3_Z] = v[VEC3_Z] + r;
}

/**
 * Substract a scalar to a vector (result is in res)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarSub(v, v, r);
*/
void VECMATVector3ScalarSub(VECMATVector3 v, VECMATVector3 res, float r)
{
    res[VEC3_X] = v[VEC3_X] - r;
    res[VEC3_Y] = v[VEC3_Y] - r;
    res[VEC3_Z] = v[VEC3_Z] - r;
}

/**
 * Multpiply a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarMult(v, v, r);
*/
void VECMATVector3ScalarMult(VECMATVector3 v, VECMATVector3 res, float r)
{
    res[VEC3_X] = v[VEC3_X] * r;
    res[VEC3_Y] = v[VEC3_Y] * r;
    res[VEC3_Z] = v[VEC3_Z] * r;
}

/**
 * Divide a vector by a scalar (be careful, you will loose the value of your initial vector)
 * 
 * If you don't want to store the result in a new vector, call the function like this :
 *      VECMATVector3ScalarDivide(v, v, r);
*/
void VECMATVector3ScalarDivide(VECMATVector3 v, VECMATVector3 res, float r)
{
    res[VEC3_X] = v[VEC3_X] / r;
    res[VEC3_Y] = v[VEC3_Y] / r;
    res[VEC3_Z] = v[VEC3_Z] / r;
}

#endif
