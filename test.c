#include "matrice.h"
#include "vecteur.h"
#include "utilitaire.h"
#include <stdio.h>
#include <stdlib.h>
#include <GLKit/GLKMath.h>

#define SCREEN_W 1600
#define SCREEN_H 900
#define TO_RAD(a) ((a) * M_PI / 180)

#define ANGLE 32.0f

int main(){

    float fov = TO_RAD(ANGLE);
    float aspectRatio = SCREEN_W / SCREEN_H;
    float nearZ = 19.1f;
    float farZ = 100.0f;

    mat4 Mmat4;

    mat4ProjectionPerspective(aspectRatio, ANGLE, nearZ, farZ, Mmat4);

    GLKMatrix4 Mglk = GLKMatrix4MakePerspective(fov, aspectRatio, nearZ, farZ);

    fprintf(stdout, "TO RAD %f\n", fov);

    fprintf(stdout, "Matrices GLK\n");
    for(int i = 0; i < 16; i += 4)
    {
        fprintf(stdout, "%f %f %f %f\n", Mglk.m[i], Mglk.m[i + 1], Mglk.m[i + 2], Mglk.m[i + 3]);
    }

    fprintf(stdout, "Matrices mat4\n");
    for(int i = 0; i < 4; i++)
    {
        fprintf(stdout, "%f %f %f %f\n", Mmat4[i][0], Mmat4[i][1], Mmat4[i][2], Mmat4[i][3]);
    }


    return 0;
}