/**
 * Name : VECMATVector3.c
 * 
 * 
 * Module for vector of size 3
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
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

    VECMATVector3Create(p1X, p1Y, p1Z, p2X, p2Y, p2Z, v);

    length = VECMATVector3Length(v);

    v[VEC3_X] = v[VEC3_X] / length;
    v[VEC3_Y] = v[VEC3_Y] / length;
    v[VEC3_Z] = v[VEC3_Z] / length;
}

/**
 * Normalize the vector `v`
*/
void VECMATVector3Normalize(VECMATVector3 v)
{
    float length = VECMATVector3Length(v);

    v[VEC3_X] = v[VEC3_X] / length;
    v[VEC3_Y] = v[VEC3_Y] / length;
    v[VEC3_Z] = v[VEC3_Z] / length;
}

/**
 * Return the length of the vector `v`
*/
float VECMATVector3Length(VECMATVector3 v)
{
    return sqrt((v[VEC3_X] * v[VEC3_X]) + (v[VEC3_Y] * v[VEC3_Y]) + (v[VEC3_Z] * v[VEC3_Z]));
}

/**
 * Put in `vn` the orthogonal vector to the plan formed with `v1` and `v2`
*/
void VECMATVector3VecteurNormal(VECMATVector3 v1, VECMATVector3 v2, VECMATVector3 vn){
    vn[VEC3_X] = v1[VEC3_Y] * v2[VEC3_Z] - v1[VEC3_Z] * v2[VEC3_Y];
    vn[VEC3_Y] = v1[VEC3_Z] * v2[VEC3_X] - v1[VEC3_X] * v2[VEC3_Z];
    vn[VEC3_Z] = v1[VEC3_X] * v2[VEC3_Y] - v1[VEC3_Y] * v2[VEC3_X];
}
