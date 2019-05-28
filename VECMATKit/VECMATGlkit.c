/**
 * Name : VECMATGlkit.c
 * 
 * 
 * Module of matrix and vector to be used with OpenGL
 * 
 * Author : Mohammed-Bahsir Mahdi
 * 
*/
#include "VECMATGlkit.h"

/**
 * Create the translation matrix (result in m)
*/
void VECMATMatrix4CreateTranslation(VECMATMatrix4 m, float tx, float ty, float tz)
{
    // First line
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = 0;
    // Third line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 1;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = tx;
    m[3][1] = ty;
    m[3][2] = tz;
    m[3][3] = 1;
}

/**
* Translate the matris `init` (result in matrix in res)
*/
void VECMATMatrix4MakeTranslation(VECMATMatrix4 init, VECMATMatrix4 res, float tx, float ty, float tz)
{
    // First line
    res[0][0] = init[0][0] + init[0][3] * tx;
    res[0][1] = init[0][1] + init[0][3] * ty;
    res[0][2] = init[0][2] + init[0][3] * tz;
    res[0][3] = init[0][3];
    // Second line
    res[1][0] = init[1][0] + init[1][3] * tx;
    res[1][1] = init[1][1] + init[1][3] * ty;
    res[1][2] = init[1][2] + init[1][3] * tz;
    res[1][3] = init[1][3];
    // Third line
    res[2][0] = init[2][0] + init[2][3] * tx;
    res[2][1] = init[2][1] + init[2][3] * ty;
    res[2][2] = init[2][2] + init[2][3] * tz;
    res[2][3] = init[2][3];
    // Fourth line
    res[3][0] = init[3][0] + init[3][3] * tx;
    res[3][1] = init[3][1] + init[3][3] * ty;
    res[3][2] = init[3][2] + init[3][3] * tz;
    res[3][3] = init[3][3];
}

/**
 * Create the scaling matrix
*/
void VECMATMatrix4CreateScale(VECMATMatrix4 m, float Sx, float Sy, float Sz)
{
    // First line
    m[0][0] = Sx;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = Sy;
    m[1][2] = 0;
    m[1][3] = 0;
    // Thirld line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = Sz;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}

/**
* Scale the matrix `init` (result in matrix in res)
*/
void VECMATMatrix4MakeScale(VECMATMatrix4 init, VECMATMatrix4 res, float Sx, float Sy, float Sz)
{
    // First line
    res[0][0] = init[0][0] * Sx;
    res[0][1] = init[0][1] * Sy;
    res[0][2] = init[0][2] * Sz;
    res[0][3] = init[0][3];
    // Second line
    res[1][0] = init[1][0] * Sx;
    res[1][1] = init[1][1] * Sy;
    res[1][2] = init[1][2] * Sz;
    res[1][3] = init[1][3];
    // Thirld line
    res[2][0] = init[2][0] * Sx;
    res[2][1] = init[2][1] * Sy;
    res[2][2] = init[2][2] * Sz;
    res[2][3] = init[2][3];
    // Fourth line
    res[3][0] = init[3][0] * Sx;
    res[3][1] = init[3][1] * Sx;
    res[3][2] = init[3][2] * Sx;
    res[3][3] = init[3][3];
}

/**
 * Create the X rotation matrix
 * 
 * Angle is in radian
*/
void VECMATMatrix4CreateRotationX(VECMATMatrix4 m, float angle)
{
    float cos_val = cos(angle);
    float sin_val = sin(angle);

    // First line
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = cos_val;
    m[1][2] = sin_val;
    m[1][3] = 0;
    // Thirld line
    m[2][0] = 0;
    m[2][1] = -sin_val;
    m[2][2] = cos_val;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}

/**
 * Create the Y rotation matrix
 * 
 * Angle is in radian
*/
void VECMATMatrix4CreateRotationY(VECMATMatrix4 m, float angle)
{
    float cos_val = cos(angle);
    float sin_val = sin(angle);

    // First line
    m[0][0] = cos_val;
    m[0][1] = 0;
    m[0][2] = -sin_val;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = 0;
    // Thirld line
    m[2][0] = sin_val;
    m[2][1] = 0;
    m[2][2] = cos_val;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}

/**
 * Create the Z rotation matrix
 * 
 * Angle is in radian
*/
void VECMATMatrix4CreateRotationZ(VECMATMatrix4 m, float angle)
{
    float cos_val = cos(angle);
    float sin_val = sin(angle);

    // First line
    m[0][0] = cos_val;
    m[0][1] = sin_val;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = -sin_val;
    m[1][1] = cos_val;
    m[1][2] = 0;
    m[1][3] = 0;
    // Thirld line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 1;
    m[2][3] = 0;
    // Fourth line
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}


/**
 * Put in `projection` the matrix of the Perspective projection
 * 
 * `angle` is the angle in degree
*/
void VECMATMatrix4ProjectionPerspective(float ratio, float angle, float Znear, float Zfar, VECMATMatrix4 projection)
{
    float tanedAngle;
    float rad_angle = (angle * M_PI / 180);

    tanedAngle = tan(rad_angle / 2);
    // First line
    projection[0][0] = 1.0f / (ratio * tanedAngle);
    projection[1][0] = 0.0f;
    projection[2][0] = 0.0f;
    projection[3][0] = 0.0f;
    // Second line
    projection[0][1] = 0.0f;
    projection[1][1] = 1 / tanedAngle;
    projection[2][1] = 0.0f;
    projection[3][1] = 0.0f;
    // Third line
    projection[0][2] = 0.0f;
    projection[1][2] = 0.0f;
    projection[2][2] = (Znear + Zfar) / (Znear - Zfar);
    projection[3][2] = (2 * Zfar * Znear) / (Znear - Zfar);
    // fourth line
    projection[0][3] = 0.0f;
    projection[1][3] = 0.0f;
    projection[2][3] = -1.0f;
    projection[3][3] = 0.0f;
}


/**
 * Put in `look` the resulting look at matrix
 * 
 * How this matrix is calculated :
 * http://ogldev.atspace.co.uk/www/tutorial13/tutorial13.html
*/
void VECMATMatrix4LookAt(float Cx, float Cy, float Cz, float Tx, float Ty, float Tz, float Ux, float Uy, float Uz, VECMATMatrix4 look)
{
    VECMATVector3 f;
    VECMATVector3 l;
    VECMATVector3 u;

    VECMATVector3 up = {
        Ux, Uy, Uz
    };


    VECMATVector3CreateNormalized(Tx, Ty, Tz, Cx, Cy, Cz, f);
    VECMATVector3NormalVector(up, f, l);
    VECMATVector3Normalize(l);
    VECMATVector3NormalVector(f, l, u);
  
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
