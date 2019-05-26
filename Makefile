CC=gcc
FLAG=-Wall



VECMATVector3.o:VECMATTools.h VECMATVector3.h VECMATVector2.c
	$(CC) $(FLAG) -c VECMATVector3.c -o VECMATVector3.o


VECMATVector2.o:VECMATTools.h VECMATVector2.h VECMATVector2.c
	$(CC) $(FLAG) -c VECMATVector2.c -o VECMATVector2.o

clean:
	rm -rf *.o
