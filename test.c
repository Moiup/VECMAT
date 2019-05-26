#include <stdio.h>
#include <stdlib.h>
#include <GLKit/GLKMath.h>
#include "vecteur.h"
#include "matrice.h"

#define EYE_X 0.0f
#define EYE_Y 0.0f
#define EYE_Z 2.3f

#define C_X 2.0f
#define C_Y 3.2f
#define C_Z 5.0f

#define U_X 0.0f
#define U_Y 1.0f
#define U_Z 0.0f

int main()
{
    int i;

    GLKMatrix4 Mglk = GLKMatrix4MakeLookAt(EYE_X, EYE_Y, EYE_Z, C_X, C_Y, C_Z, U_X, U_Y, U_Z);

    for (i = 0; i < 16; i += 4)
    {
        fprintf(stdout, "%f %f %f %f\n", Mglk.m[i], Mglk.m[i + 1], Mglk.m[i + 2], Mglk.m[i + 3]);
    }

    return 0;
}