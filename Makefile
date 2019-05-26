CC=gcc
FLAG=-Wall





VECMATVector2.o:VECMATTools.h VECMATVector2.h VECMATVector2.c
	$(CC) $(FLAG) -c VECMATVector2.c -o VECMATVector2.o

clean:
	rm -rf *.o