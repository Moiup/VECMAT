/**
 * Name : vector2.c
 * 
 * 
 * Module for vector of size 2
 * 
 * Auteur : Mohammed-Bahsir Mahdi
 * 
*/
#include "vector2.h"

/**
 * Set all value of `v` to 0
*/
void vec2Zero(vec2 v);

/**
 * Create a vec2 (result is in `v`)
*/
void vec2Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec3 v);

/**
 * Create a vec 2 (result in `v`) already normalized
*/
void vec2CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec3 v);

/**
 * Normalize the vector `v`
*/
void vec2Normalize(vec2 v);

/**
 * Return the length of the vector `v`
*/
void vec2Length(vec2 v);