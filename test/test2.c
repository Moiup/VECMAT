#include <stdio.h>
#include <math.h>
#include <GLKit/GLKMath.h>

int main()
{
    /*
    GLKMatrix4 m = GLKMatrix4Make(
        0, 1, 2, 3,
        4, 5, 6, 7,
        8, 9, 10, 11,
        12, 13, 14, 15
        );
    */

    GLKMatrix4 m = GLKMatrix4MakeYRotation(0.38f);
/*
    GLKMatrix4 m = GLKMatrix4Make(
            1,// 00
            0,// 01
            0,// 02
            0,// 03
            0,// 10
            1,// 11
            0,// 12
            0,// 13
            0,// 20
            0,// 21
            1,// 22
            0,// 23
            5,// 30
            6,// 31
            7,// 32
            1// 33
        );
        */
    
    GLKMatrix4 rotation = GLKMatrix4Make(
            cos(0.38f),// 00
            0,// 01
            sin(0.38f),// 02
            0,// 03
            0,// 10
            1,// 11
            0,// 12
            0,// 13
            -sin(0.38f),// 20
            0,// 21
            cos(0.38f),// 22
            0,// 23
            0,// 30
            0,// 31
            0,// 32
            1// 33
        );


    for(int i = 0; i < 16; i += 4)
    {
        fprintf(stdout, "%f %f %f %f\n", m.m[i], m.m[i + 1], m.m[i + 2], m.m[i + 3]);
    }
    fprintf(stdout, "\n");
    for(int i = 0; i < 16; i += 4)
    {
        fprintf(stdout, "%f %f %f %f\n", rotation.m[i], rotation.m[i + 1], rotation.m[i + 2], rotation.m[i + 3]);
    }

    return 0;
}
