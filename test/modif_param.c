#include <stdio.h>



void modif_param(int *t1, int *t2)
{
    t1[0] = t1[0] + t2[0];
    t1[1] = t1[1] + t2[1];
    t1[2] = t1[2] + t2[2];
}



int main()
{
    int test[] = {1, 2, 3};


    fprintf(stdout, "Avant : %d %d %d\n", test[0], test[1], test[2]);

    modif_param(test, test);

    fprintf(stdout, "Avant : %d %d %d\n", test[0], test[1], test[2]);

    return 0;
}
