/**
 * Name : vector2.c
 * 
 * 
 * Module for vector of size 2
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
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
 * Create a vec2 (result is in `v`)
*/
void VECMATVector2Create(float p1X, float p1Y, float p2X, float p2Y, VECMATVector2 v)
{
    v[VEC2_X] = p2X - p1X;
    v[VEC2_Y] = p2Y - p1Y;
}

/**
 * Create a vec2 already normalized (result in `v`)
*/
void VECMATVector2CreateNormalized(float p1X, float p1Y, float p2X, float p2Y, VECMATVector2 v)
{
    float length;

    v[VEC2_X] = p2X - p1X;
    v[VEC2_Y] = p2Y - p1Y;

    length = VECMATVector2Length(v);

    v[VEC2_X] = v[VEC2_X] / length;
    v[VEC2_Y] = v[VEC2_Y] / length;
}


/**
 * Normalize the vector `v`
*/
void VECMATVector2Normalize(VECMATVector2 v)
{
    float length = VECMATVector2Length(v);

    v[VEC2_X] = v[VEC2_X] / length;
    v[VEC2_Y] = v[VEC2_Y] / length;
}

/**
 * Return the length of the vector `v`
*/
float VECMATVector2Length(VECMATVector2 v)
{
    return sqrt((v[VEC2_X] * v[VEC2_X]) + (v[VEC2_Y] * v[VEC2_Y]));
}