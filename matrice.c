/**
 * Nom : matrice.c
 * 
 * 
 * Module de matrice
 * 
 * Auteur : Mohammed-Bahsir Mahdi
 * 
*/
#include "matrice.h"
#include <stdio.h>
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

// Pour le vecteur 3
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
void mat4Identity(mat4 v){
    v[0][0] = 1;
    v[0][1] = 0;
    v[0][2] = 0;
    v[0][3] = 0;

    v[1][0] = 0;
    v[1][1] = 1;
    v[1][2] = 0;
    v[1][3] = 0;

    v[2][0] = 0;
    v[2][1] = 0;
    v[2][2] = 1;
    v[2][3] = 0;

    v[3][0] = 0;
    v[3][1] = 0;
    v[3][2] = 0;
    v[3][3] = 1;
}

/**
 * Multiplie de matrice de taille 4 et stocke le résultat dans res
*/
void mat4Mult(mat4 m1, mat4 m2, mat4 res)
{
    int i;
    int j;
    int k;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < 4; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

/**
 * Crée la matrice translation
*/
void mat4TranslationCreate(mat4 m, float x, float y, float z)
{
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = x;

    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = y;

    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 1;
    m[2][3] = z;

    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}

/**
 * Effectue une translation
*/
void mat4Translation(mat4 init, mat4 res, float x, float y, float z)
{
    res[0][0] = init[0][0] + init[3][0] * x;
    res[0][1] = init[0][1] + init[3][1] * x;
    res[0][2] = init[0][2] + init[3][2] * x;
    res[0][3] = init[0][3] + init[3][3] * x;

    res[1][0] = init[1][0] + init[3][0] * y;
    res[1][1] = init[1][1] + init[3][1] * y;
    res[1][2] = init[1][2] + init[3][2] * y;
    res[1][3] = init[1][3] + init[3][3] * y;

    res[2][0] = init[2][0] + init[3][0] * z;
    res[2][1] = init[2][1] + init[3][1] * z;
    res[2][2] = init[2][2] + init[3][2] * z;
    res[2][3] = init[2][3] + init[3][3] * z;

    res[3][0] = 0;
    res[3][1] = 0;
    res[3][2] = 0;
    res[3][3] = 1;
}

/**
 * LookAt aligné sur Z
*/
void mat4LookAtZ(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, mat4 look)
{
    vec4 v;

    mat4 Rx;  // La matrice de rotation autour de l'axe des X
    float h1; // L'hypothénuse pour la première rotation (cf cours)

    mat4 Ry;  // La matrice de rotation autour de l'axe des Y
    float h2; // L'hypothénuse pour la seconde rotation (cf cours)

    // On crée le vecteur initial (celui de l'état actuel)
    vec4Create(Cx, Cy, Cz, Tx, Ty, Tz, v);

    // Calcul de la première matrice de rotation
    h1 = sqrt(v[2] * v[2] + v[1] * v[1]);

    Rx[0][0] = 1;
    Rx[0][1] = 0;
    Rx[0][2] = 0;
    Rx[0][3] = 0;

    Rx[1][0] = 0;
    Rx[1][1] = v[2] / h1;
    Rx[1][2] = -v[1] / h1;
    Rx[1][3] = 0;

    Rx[2][0] = 0;
    Rx[2][1] = -Rx[1][2];
    Rx[2][2] = Rx[1][1];
    Rx[3][3] = 0;

    Rx[3][0] = 0;
    Rx[3][1] = 0;
    Rx[3][2] = 0;
    Rx[3][3] = 1;

    // Calcul de la seconde matrice de rotation
    h2 = sqrt(v[2] * v[2] + v[0] * v[0]);

    Ry[0][0] = v[2] / h2;
    Ry[0][1] = 0;
    Ry[0][2] = v[0] / h2;
    Ry[0][3] = 0;

    Ry[1][0] = 0;
    Ry[1][1] = 1;
    Ry[1][2] = 0;
    Ry[1][3] = 0;

    Ry[2][0] = -Ry[0][2];
    Ry[2][1] = 0;
    Ry[2][2] = Ry[0][0];
    Ry[3][3] = 0;

    Ry[3][0] = 0;
    Ry[3][1] = 0;
    Ry[3][2] = 0;
    Ry[3][3] = 1;

    look[0][0] = Ry[0][0];
    look[0][1] = Ry[0][2] * Rx[2][1];
    look[0][2] = Ry[0][2] * Rx[2][2];
    look[0][3] = -look[0][0] * Cx - look[0][1] * Cy - look[0][2] * Cz;

    look[1][0] = 0;
    look[1][1] = Rx[1][1];
    look[1][2] = Rx[1][2];
    look[1][3] = -look[1][0] * Cx - look[1][1] * Cy - look[1][2] * Cz;

    look[2][0] = Ry[2][0];
    look[2][1] = Ry[2][2] * Rx[2][1];
    look[2][2] = Ry[2][2] * Rx[2][2];
    look[2][3] = -look[2][0] * Cx - look[2][1] * Cy - look[2][2] * Cz;

    look[3][0] = 0;
    look[3][1] = 0;
    look[3][2] = 0;
    look[3][3] = 1;
}

/**
 * La matrice de projection en perspective
 * 
 * Angle : en degré
*/
void mat4ProjectionPerspective(float ratio, float angle, float Znear, float Zfar, mat4 projection)
{
    float tanedAngle;
    float rad_angle = (angle * M_PI / 180);

    tanedAngle = tan(rad_angle / 2);

    projection[0][0] = 1.0f / (ratio * tanedAngle);
    projection[1][0] = 0.0f;
    projection[2][0] = 0.0f;
    projection[3][0] = 0.0f;

    projection[0][1] = 0.0f;
    projection[1][1] = 1 / tanedAngle;
    projection[2][1] = 0.0f;
    projection[3][1] = 0.0f;

    projection[0][2] = 0.0f;
    projection[1][2] = 0.0f;
    projection[2][2] = (Znear + Zfar) / (Znear - Zfar);
    projection[3][2] = (2 * Zfar * Znear) / (Znear - Zfar);

    projection[0][3] = 0.0f;
    projection[1][3] = 0.0f;
    projection[2][3] = -1.0f;
    projection[3][3] = 0.0f;
}

/**
 * LookAt aligné sur Z
*/
void mat4LookAtZ2(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, mat4 look)
{
    vec4 v;

    mat4 Rx;  // La matrice de rotation autour de l'axe des X
    float h1; // L'hypothénuse pour la première rotation (cf cours)

    mat4 Ry;  // La matrice de rotation autour de l'axe des Y
    float h2; // L'hypothénuse pour la seconde rotation (cf cours)

    // On crée le vecteur initial (celui de l'état actuel)
    fprintf(stdout, "Cx %f, Cy %f, Cz %f\n", Cx, Cy, Cz);
    vec4Create(Cx, Cy, Cz, Tx, Ty, Tz, v);
    fprintf(stdout, "v : %f %f %f %f\n", v[0], v[1], v[2], v[3]);

    // Calcul de la première matrice de rotation
    h1 = sqrt(v[2] * v[2] + v[1] * v[1]);

    Rx[0][0] = 1;
    Rx[0][1] = 0;
    Rx[0][2] = 0;
    Rx[0][3] = 0;

    Rx[1][0] = 0;
    Rx[1][1] = v[2] / h1;
    Rx[1][2] = -v[1] / h1;
    Rx[1][3] = 0;

    Rx[2][0] = 0;
    Rx[2][1] = -Rx[1][2];
    Rx[2][2] = Rx[1][1];
    Rx[3][3] = 0;

    Rx[3][0] = 0;
    Rx[3][1] = 0;
    Rx[3][2] = 0;
    Rx[3][3] = 1;

    fprintf(stdout, "Rx\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            fprintf(stdout, "%f ", Rx[i][j]);
        }
        fprintf(stdout, "\n");
    }
    fprintf(stdout, "\n");

    // Calcul de la seconde matrice de rotation
    h2 = sqrt(v[2] * v[2] + v[0] * v[0]);

    Ry[0][0] = v[2] / h2;
    Ry[0][1] = 0;
    Ry[0][2] = v[0] / h2;
    Ry[0][3] = 0;

    Ry[1][0] = 0;
    Ry[1][1] = 1;
    Ry[1][2] = 0;
    Ry[1][3] = 0;

    Ry[2][0] = -Ry[0][2];
    Ry[2][1] = 0;
    Ry[2][2] = Ry[0][0];
    Ry[3][3] = 0;

    Ry[3][0] = 0;
    Ry[3][1] = 0;
    Ry[3][2] = 0;
    Ry[3][3] = 1;

    fprintf(stdout, "Ry\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            fprintf(stdout, "%f ", Ry[i][j]);
        }
        fprintf(stdout, "\n");
    }
    fprintf(stdout, "\n");

    mat4 mul;

    mat4Mult(Ry, Rx, mul);

    fprintf(stdout, "Ry * Rx\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            fprintf(stdout, "%f ", mul[i][j]);
        }
        fprintf(stdout, "\n");
    }
    fprintf(stdout, "\n");

    look[0][0] = Ry[0][0];
    look[0][1] = Ry[0][2] * Rx[2][1];
    look[0][2] = Ry[0][2] * Rx[2][2];
    look[0][3] = -look[0][0] * Cx - look[0][1] * Cy - look[0][2] * Cz;

    look[1][0] = 0;
    look[1][1] = Rx[1][1];
    look[1][2] = Rx[1][2];
    look[1][3] = -look[1][0] * Cx - look[1][1] * Cy - look[1][2] * Cz;

    look[2][0] = Ry[2][0];
    look[2][1] = Ry[2][2] * Rx[2][1];
    look[2][2] = Ry[2][2] * Rx[2][2];
    look[2][3] = -look[2][0] * Cx - look[2][1] * Cy - look[2][2] * Cz;

    look[3][0] = 0;
    look[3][1] = 0;
    look[3][2] = 0;
    look[3][3] = 1;
}

/**
 *
 * Pour des renseignements :
 * http://ogldev.atspace.co.uk/www/tutorial13/tutorial13.html
*/
void mat4LookAt(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, mat4 look)
{
    vec3 f;
    vec3 l;
    vec3 u;

    vec3 up = {
        Ux, Uy, Uz
    };


    vec3CreateNormalized(Tx, Ty, Tz, Cx, Cy, Cz, f);
    vec3VecteurNormal(up, f, l);
    vec3Normalize(l);
    vec3VecteurNormal(f, l, u);

    fprintf(stdout, "l %f %f %f\n", l[0], l[1], l[2]);
    fprintf(stdout, "u %f %f %f\n", u[0], u[1], u[2]);
    fprintf(stdout, "f %f %f %f\n", f[0], f[1], f[2]);
  
    look[0][0] = l[0];
    look[1][0] = l[1];
    look[2][0] = l[2];
    look[3][0] = -l[0] * Cx - l[1] * Cy - l[2] * Cz;

    look[0][1] = u[0];
    look[1][1] = u[1];
    look[2][1] = u[2];
    look[3][1] = -u[0] * Cx - u[1] * Cy - u[2] * Cz;

    look[0][2] = f[0];
    look[1][2] = f[1];
    look[2][2] = f[2];
    look[3][2] = -f[0] * Cx - f[1] * Cy - f[2] * Cz;

    look[0][3] = 0;
    look[1][3] = 0;
    look[2][3] = 0;
    look[3][3] = 1;
}
