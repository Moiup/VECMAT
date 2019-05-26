CC=gcc
FLAG=-Wall

matrice.o:utilitaire.h vecteur.o matrice.h matrice.c
	$(CC) $(FLAG) -c matrice.c -o matrice.o

vecteur.o:utilitaire.h vecteur.h vecteur.c
	$(CC) $(FLAG) -c vecteur.c -o vecteur.o

clean:
	rm -rf *.o
