/**
 * Name : vector2.h
 * 
 * 
 * Module for vector of size 2
 * 
 * Auteur : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECTOR2_H
#define VECT0R2_H

#define VEC2_DIM 2  // The number of values
#define VEC2_X 0    // Access the X value
#define VEC2_Y 1    // Access the Y value

/***********************************************/
/* Type definitions                            */
/***********************************************/

// Le vecteur 2
typedef float vec2[VEC2_DIM];


/**************************************************/
/* Les fonctions                                  */
/**************************************************/


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


#endif