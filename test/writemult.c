#include <stdio.h>
#include <stdlib.h>




int main()
{
    int i;
    int j;
    int k;
    /*
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                fprintf(stdout, "res[%d][%d] += m1[%d][%d] * m2[%d][%d]\n", i, j, i, k, k , j);
            }
        }
    }
    */


    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            fprintf(stdout, "res[%d][%d] = m1[%d][%d] + m2[%d][%d];\n", i, j, i, j, i, j);
        }
        fprintf(stdout, "\n");
    }

    return 0;
}
