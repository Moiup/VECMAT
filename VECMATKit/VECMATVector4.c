/**
 * Name : VECMATVector4.c
 * 
 * 
 * Module for vector of size 4
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#include "VECMATVector4.h"

/**
 * Besides the VECMATVector4Zero and VECMATVector4Define functions, the `W`value will always be 1, or supposed to be 1
 * 
*/

/**
 * Set all value of `v` to 0
*/
void VECMATVector4Zero(VECMATVector4 v)
{
    v[VEC4_X] = 0;
    v[VEC4_Y] = 0;
    v[VEC4_Z] = 0;
    v[VEC4_W] = 0;
}

/**
 * Create a vector made of the coordinate given
*/
void VECMATVector4Define(VECMATVector4 v, float x, float y, float z, float w)
{
    v[VEC4_X] = x;
    v[VEC4_Y] = y;
    v[VEC4_Z] = z;
    v[VEC4_W] = w;
}

/**
 * Create a homogeneous vec4 (result is in `v`)
*/
void VECMATVector4Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector4 v)
{
    v[VEC4_X] = p2X - p1X;
    v[VEC4_Y] = p2Y - p1Y;
    v[VEC4_Z] = p2Z - p1Z;
    v[VEC4_W] = HOMOGENEOUS_VAL;
}

/**
 * Create a homogeneous vec4 already normalized (result in `v`)
*/
void VECMATVector4CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, VECMATVector4 v)
{
    float length;

    // Creating the vector
    v[VEC4_X] = (p2X) - (p1X);
    v[VEC4_Y] = (p2Y) - (p1Y);
    v[VEC4_Z] = (p2Z) - (p1Z);
    v[VEC4_W] = HOMOGENEOUS_VAL;

    // Getting the vector length
    length = VEC4_LENGTH(v);

    // Normalizing the vector
    v[VEC4_X] = v[VEC4_X] / length;
    v[VEC4_Y] = v[VEC4_Y] / length;
    v[VEC4_Z] = v[VEC4_Z] / length;
    v[VEC4_W] = HOMOGENEOUS_VAL;
}

/**
 * Normalize the vector `v`
*/
void VECMATVector4Normalize(VECMATVector4 v)
{
    float length = VEC4_LENGTH(v);

    v[VEC4_X] = v[VEC4_X] / length;
    v[VEC4_Y] = v[VEC4_Y] / length;
    v[VEC4_Z] = v[VEC4_Z] / length;
}

/**
 * Return the length of the vector `v`
*/
float VECMATVector4Length(VECMATVector4 v)
{
    return VEC4_LENGTH(v);
}

/**
 * The cross product between `v1` and `v2` (result in res)
*/
void VECMATVector4CrossProduct(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 vn)
{
    vn[VEC4_X] = v1[VEC4_Y] * v2[VEC4_Z] - v1[VEC4_Z] * v2[VEC4_Y];
    vn[VEC4_Y] = v1[VEC4_Z] * v2[VEC4_X] - v1[VEC4_X] * v2[VEC4_Z];
    vn[VEC4_Z] = v1[VEC4_X] * v2[VEC4_Y] - v1[VEC4_Y] * v2[VEC4_X];
}

/**
 * Sum of two vectors (result in res)
*/
void VECMATVector4Sum(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 res)
{
    res[VEC4_X] = v1[VEC4_X] + v2[VEC4_X];
    res[VEC4_Y] = v1[VEC4_Y] + v2[VEC4_Y];
    res[VEC4_Z] = v1[VEC4_Z] + v2[VEC4_Z];
    res[VEC4_W] = v1[VEC4_W] + v2[VEC4_W];
}

/**
 * Substraction of two vectors (result in res)
*/
void VECMATVector4Sub(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 res)
{
    res[VEC4_X] = v1[VEC4_X] - v2[VEC4_X];
    res[VEC4_Y] = v1[VEC4_Y] - v2[VEC4_Y];
    res[VEC4_Z] = v1[VEC4_Z] - v2[VEC4_Z];
    res[VEC4_W] = v1[VEC4_W] - v2[VEC4_W];
}

/**
 * Multpiply a vector by a scalar (be careful, you will loose the value of your initial vector)
*/
void VECMATVector4ScalarMult(VECMATVector4 v, float r)
{
    v[VEC4_X] = v[VEC4_X] * r;
    v[VEC4_Y] = v[VEC4_Y] * r;
    v[VEC4_Z] = v[VEC4_Z] * r;
    v[VEC4_W] = v[VEC4_W] * r;
}
