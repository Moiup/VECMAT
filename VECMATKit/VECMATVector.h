/**
 * Nom : vecteur.h
 * 
 * 
 * Module de vecteur
 * 
 * Auteur : Mohammed-Bahsir Mahdi
 * 
*/
#ifndef VECTEUR_H
#define VECTEUR_H
#include <stdlib.h>
#include "utilitaire.h"

/***********************************************/
/* Définitions des différents types de vecteur */
/***********************************************/

// Le vecteur 2
typedef float vec2[2];

// Le vecteur 3
typedef float vec3[3];

// Le vecteur 4
typedef float vec4[4];

/**************************************************/
/* Les fonctions associées à chacun des vecteurs */
/**************************************************/

// Pour le vecteur 2
/**
 * Met à 0 les valeurs du vecteurs
*/
void vec2Zero(vec2 v);

// Pour le vecteur 3
/**
 * Met à 0 les valeurs du vecteurs
*/
void vec3Zero(vec3 v);

/**
 * Crée un vecteur
*/
void vec3Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec3 v);

/**
 * Renvoie le vecteur normal au plan défini par v1 et v2
*/
void vec3VecteurNormal(vec3 v1, vec3 v2, vec3 vn);

/**
 * Normalise un vecteur
*/
void vec3Normalize(vec3 v);

/**
 * Crée le vecteur normalisé associée aux points données
*/
void vec3CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec4 v);

// Pour le vecteur 4
/**
 * Met à 0 les valeurs du vecteurs
*/
void vec4Zero(vec4 v);

/**
 * Crée le vecteur associée aux points données
*/
void vec4Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec4 v);

/**
 * Crée le vecteur normalisé associée aux points données
*/
void vec4CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec4 v);

#endif
