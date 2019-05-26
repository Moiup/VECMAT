/**
 * Nom : vecteur.c
 * 
 * 
 * Module de vecteur
 * 
 * Auteur : Mohammed-Bahsir Mahdi
 * 
*/
#include "vecteur.h"
#include <stdio.h>

// Pour le vecteur 2
/**
 * Met à 0 les valeurs du vecteurs
*/
void vec2Zero(vec2 v)
{
    v[0] = 0;
    v[1] = 0;
}

// Pour le vecteur 3
/**
 * Met à 0 les valeurs du vecteurs
*/
void vec3Zero(vec3 v)
{
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
}

/**
 * Crée un vecteur
*/
void vec3Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec3 v){
    v[0] = p2X - p1X;
    v[1] = p2Y - p1Y;
    v[2] = p2Z - p1Z;
}

/**
 * Renvoie le vecteur normal au plan défini par v1 et v2
*/
void vec3VecteurNormal(vec3 v1, vec3 v2, vec3 vn){
    vn[0] = v1[1] * v2[2] - v1[2] * v2[1];
    vn[1] = v1[2] * v2[0] - v1[0] * v2[2];
    vn[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

/**
 * Normalise un vecteur
*/
void vec3Normalize(vec3 v)
{
    float norme = sqrt((v[0] * v[0]) + (v[1] * v[1]) + (v[2] * v[2]));

    v[0] = v[0] / norme;
    v[1] = v[1] / norme;
    v[2] = v[2] / norme;
}

/**
 * Crée le vecteur normalisé associée aux points données
*/
void vec3CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec4 v)
{
    float norme;

    vec3Create(p1X, p1Y, p1Z, p2X, p2Y, p2Z, v);

    norme = sqrt((v[0] * v[0]) + (v[1] * v[1]) + (v[2] * v[2]));
    
    v[0] = v[0] / norme;
    v[1] = v[1] / norme;
    v[2] = v[2] / norme;
}

// Pour le vecteur 4
/**
 * Met à 0 les valeurs du vecteurs
*/
void vec4Zero(vec4 v)
{
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
}

/**
 * Crée le vecteur associée aux points données
*/
void vec4Create(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec4 v){
    v[0] = p2X - p1X;
    v[1] = p2Y - p1Y;
    v[2] = p2Z - p1Z;
    v[3] = 1;
}

/**
 * Crée le vecteur normalisé associée aux points données
*/
void vec4CreateNormalized(float p1X, float p1Y, float p1Z, float p2X, float p2Y, float p2Z, vec4 v)
{
    float norme;

    vec4Create(p1X, p1Y, p1Z, p2X, p2Y, p2Z, v);

    norme = sqrt((v[0] * v[0]) + (v[1] * v[1]) + (v[2] * v[2]));
    
    v[0] = v[0] / norme;
    v[1] = v[1] / norme;
    v[2] = v[2] / norme;
}


