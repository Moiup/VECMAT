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

void VECMATMatrix4ProjectionFrustum(float left, float right, float bottom, float top, float nearZ, float farZ, VECMATMatrix4 projection)
{
    float _2xN = 2 * nearZ;
    float r_l = right - left;
    float t_b = top - bottom;
    float n_f = nearZ - farZ;

    // First line
    projection[0][0] = _2xN / r_l;
    projection[0][1] = 0;
    projection[0][2] = 0;
    projection[0][3] = 0;
    // Second line
    projection[1][0] = 0;
    projection[1][1] = _2xN / t_b;
    projection[1][2] = 0;
    projection[1][3] = 0;
    // Third line
    projection[2][0] = (right + left) / r_l;
    projection[2][1] = (top + bottom) / t_b;
    projection[2][2] = (farZ + nearZ) / n_f;
    projection[2][3] = -1;
    // Fourth line
    projection[3][0] = 0;
    projection[3][1] = 0;
    projection[3][2] = (_2xN * farZ)/ n_f;
    projection[3][3] = 0;
}

int main()
{
    int i;

    GLKMatrix4 Mglk = GLKMatrix4MakeFrustum(LEFT, RIGHT, BOTTOM, TOP, NEAR_Z, FAR_Z);

    VECMATMatrix4 m;
    VECMATMatrix4ProjectionFrustum(LEFT, RIGHT, BOTTOM, TOP, NEAR_Z, FAR_Z, m);

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
