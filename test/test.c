#include "vecteur.h"
#include "matrice.h"
#include <stdio.h>
#include <stdlib.h>
#include <GLKit/GLKMath.h>
#include <time.h>

#define TAILLE_TEST 10000

#define RAND_A 1
#define RAND_B 170

typedef struct{
    float Cx;
    float Cy;
    float Cz;
    float Tx;
    float Ty;
    float Tz;
    float Ux;
    float Uy;
    float Uz;
}la;




int rand_a_b(int a, int b){
    return (rand() % (b - a + 1)) + a;
}



void remplissage(la *la_test){
    int i;

    for(i = 0; i < TAILLE_TEST; i++){
        la_test[i].Cx = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Cy = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Cz = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Tx = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Tz = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Tz = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Ux = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Uy = (float)rand_a_b(RAND_A, RAND_B);
        la_test[i].Uz = (float)rand_a_b(RAND_A, RAND_B);
    }
}



int main(){
    la la_test[TAILLE_TEST];
    clock_t current;
    clock_t end;
    
    GLKMatrix4 Mglk;
    mat4 Mmat4;
    int i;
    
    srand(time(NULL));

    // On remplit le tableau de valeur aléatoire
    remplissage(la_test);

    // Calcul du temps d'exécution avec GLK
    fprintf(stdout, "Début GLK :\n");
    current = clock(); // Initialisation du temps actuel
    for(i = 0; i < TAILLE_TEST; i++){
        Mglk = GLKMatrix4MakeLookAt(
            la_test[i].Cx,
            la_test[i].Cy,
            la_test[i].Cz,
            la_test[i].Tx,
            la_test[i].Tz,
            la_test[i].Tz,
            la_test[i].Ux,
            la_test[i].Uy,
            la_test[i].Uz
        );
        fprintf(stdout, "Res %d\n", i);
        fprintf(stdout, "%f %f %f %f\n", Mglk.m[0], Mglk.m[1], Mglk.m[2], Mglk.m[3]);
        fprintf(stdout, "%f %f %f %f\n", Mglk.m[4], Mglk.m[5], Mglk.m[6], Mglk.m[7]);
        fprintf(stdout, "%f %f %f %f\n", Mglk.m[8], Mglk.m[9], Mglk.m[10], Mglk.m[11]);
        fprintf(stdout, "%f %f %f %f\n", Mglk.m[12], Mglk.m[13], Mglk.m[14], Mglk.m[15]);
    }
    end = clock(); // Récupération du temps écoulé
    fprintf(stdout, "Execution time : %lu\n", end - current);

    // Calcul du temps d'exécution avec mon module
    fprintf(stdout, "Début mat4 :\n");
    current = clock(); // Initialisation du temps actuel
    for(i = 0; i < TAILLE_TEST; i++){
        mat4LookAt(
            la_test[i].Cx,
            la_test[i].Cy,
            la_test[i].Cz,
            la_test[i].Tx,
            la_test[i].Tz,
            la_test[i].Tz,
            la_test[i].Ux,
            la_test[i].Uy,
            la_test[i].Uz,
            Mmat4
        );

        fprintf(stdout, "Res %d\n", i);
        fprintf(stdout, "%f %f %f %f\n", Mmat4[0][0], Mmat4[0][1], Mmat4[0][2], Mmat4[0][3]);
        fprintf(stdout, "%f %f %f %f\n", Mmat4[1][0], Mmat4[1][1], Mmat4[1][2], Mmat4[1][3]);
        fprintf(stdout, "%f %f %f %f\n", Mmat4[2][0], Mmat4[2][1], Mmat4[2][2], Mmat4[2][3]);
        fprintf(stdout, "%f %f %f %f\n", Mmat4[3][0], Mmat4[3][1], Mmat4[3][2], Mmat4[3][3]);
    }
    end = clock(); // Récupération du temps écoulé
    fprintf(stdout, "Execution time : %lu\n", end - current);
}
