/**
 * Nom : matrice.h
 * 
 * 
 * Module de matrice
 * 
 * Auteur : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef MATRICE_H
#define MATRICE_H
#include <stdlib.h>
#include "vecteur.h"

/***********************************************/
/* Définitions des différents types de matrice */
/***********************************************/

// La matrice 2
typedef float mat2[2][2];

// La matrice 3
typedef float mat3[3][3];

// La matrice 4
typedef float mat4[4][4];

/**************************************************/
/* Les fonctions associées à chacune des matrices */
/**************************************************/

// Pour la matrice 2
/**
 * Met à 0 les valeurs de la matrice
*/
void mat2Zero(mat2 m);

/**
 * Multiplie de matrice de taille 2 et stocke le résultat dans res
*/
void mat2Mult(mat2 m1, mat2 m2, mat2 res);

// Pour le matrice 3
/**
 *Met à 0 les valeurs de la matrice
*/
void mat3Zero(mat3 m);

/**
 * Multiplie de matrice de taille 3 et stocke le résultat dans res
*/
void mat3Mult(mat2 m1, mat3 m2, mat3 res);

// Pour la matrice 4
/**
 * Met à 0 les valeurs de la matrice
*/
void mat4Zero(mat4 v);

/**
 * Initialise v en matrice identite
*/
void mat4Identity(mat4 v);

/**
 * Multiplie de matrice de taille 4 et stocke le résultat dans res
*/
void mat4Mult(mat4 m1, mat4 m2, mat4 res);

/**
 * Crée la matrice translation
*/
void mat4TranslationCreate(mat4 m, float x, float y, float z);

/**
 * Effectue une translation
*/
void mat4Translation(mat4 init, mat4 res, float x, float y, float z);

/**
 * LookAt aligné sur Z
 * 
 * Look est la matrice résultante
*/
void mat4LookAt(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, mat4 look);

/**
 * La matrice de projection en perspective
*/
void mat4ProjectionPerspective(float ratio, float angle, float Znear, float Zfar, mat4 projection);


/**
 * LookAt aligné sur Z
*/
void mat4LookAtZ2(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, mat4 look);


void mat4LookAtZ3(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, mat4 look);

#endif
