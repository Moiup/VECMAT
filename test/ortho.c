#include <stdio.h>
#include <math.h>
#include <GLKit/GLKMath.h>


#define LEFT -1.0f
#define RIGHT 2.0f
#define BOTTOM -1.0f
#define TOP 2.0f
#define NEAR_Z 10.0f
#define FAR_Z 0.1f

typedef float VECMATMatrix4[4][4];

void VECMATMatrix4ProjectionOrtho(float left, float right, float bottom, float top, float nearZ, float farZ, VECMATMatrix4 m)
{
    float r_l = right - left;
    float t_b = top - bottom;
    float f_n = farZ - nearZ;

    // First line
    m[0][0] = 2 / r_l;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    // Second line
    m[1][0] = 0;
    m[1][1] = 2 / t_b;
    m[1][2] = 0;
    m[1][3] = 0;
    // Third line
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = -2 / (f_n);
    m[2][3] = 0;
    // Fourth line
    m[3][0] = (-right - left) / r_l;;
    m[3][1] = (-top - bottom) / t_b;
    m[3][2] = (-farZ - nearZ) / f_n;
    m[3][3] = 1;
}

int main()
{
    int i;

    GLKMatrix4 Mglk = GLKMatrix4MakeOrtho(LEFT, RIGHT, BOTTOM, TOP, NEAR_Z, FAR_Z);

    VECMATMatrix4 m;
    VECMATMatrix4ProjectionOrtho(LEFT, RIGHT, BOTTOM, TOP, NEAR_Z, FAR_Z, m);

    fprintf(stdout, "GL Kit\n");
    for(i = 0; i < 16; i += 4)
    {
        fprintf(stdout, "%f %f %f %f\n", Mglk.m[i], Mglk.m[i + 1], Mglk.m[i + 2], Mglk.m[i + 3]);
    }

    fprintf(stdout, "VECMATMatrix4\n");
    for(i = 0; i < 4; i++)
    {
        fprintf(stdout, "%f %f %f %f\n", m[i][0], m[i][1], m[i][2], m[i][3]);
    }



}
