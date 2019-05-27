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

    VECMATVector4Create(p1X, p1Y, p1Z, p2X, p2Y, p2Z, v);

    length = VECMATVector4Length(v);

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
    float length = VECMATVector4Length(v);

    v[VEC4_X] = v[VEC4_X] / length;
    v[VEC4_Y] = v[VEC4_Y] / length;
    v[VEC4_Z] = v[VEC4_Z] / length;
}

/**
 * Return the length of the vector `v`
*/
float VECMATVector4Length(VECMATVector4 v)
{
    return sqrt((v[VEC4_X] * v[VEC4_X]) + (v[VEC4_Y] * v[VEC4_Y]) + (v[VEC4_Z] * v[VEC4_Z]));
}

/**
 * Put in `vn` the orthogonal vector to the plan formed with `v1` and `v2`
*/
void VECMATVector4VecteurNormal(VECMATVector4 v1, VECMATVector4 v2, VECMATVector4 vn)
{
    vn[VEC4_X] = v1[VEC4_Y] * v2[VEC4_Z] - v1[VEC4_Z] * v2[VEC4_Y];
    vn[VEC4_Y] = v1[VEC4_Z] * v2[VEC4_X] - v1[VEC4_X] * v2[VEC4_Z];
    vn[VEC4_Z] = v1[VEC4_X] * v2[VEC4_Y] - v1[VEC4_Y] * v2[VEC4_X];
}


