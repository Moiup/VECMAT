CC=gcc
FLAG=-Wall
FLAG_O=VECMATVector2.o VECMATVector3.o VECMATVector4.o VECMATMatrix2.o VECMATMatrix3.o VECMATMatrix4.o

all:VECMATTools.h $(FLAG_O) VECMATGlkit.o

VECMATGlkit.o:VECMATTools.h $(FLAG_O) VECMATGlkit.h VECMATGlkit.c
	$(CC) $(FLAG) -c VECMATGlkit.c -o VECMATGlkit.o

VECMATMatrix4.o:VECMATTools.h VECMATMatrix4.h VECMATMatrix4.c
	$(CC) $(FLAG) -c VECMATMatrix4.c -o VECMATMatrix4.o

VECMATMatrix3.o:VECMATTools.h VECMATMatrix3.h VECMATMatrix3.c
	$(CC) $(FLAG) -c VECMATMatrix3.c -o VECMATMatrix3.o

VECMATMatrix2.o:VECMATTools.h VECMATMatrix2.h VECMATMatrix2.c
	$(CC) $(FLAG) -c VECMATMatrix2.c -o VECMATMatrix2.o

VECMATVector4.o:VECMATTools.h VECMATVector4.h VECMATVector4.c
	$(CC) $(FLAG) -c VECMATVector4.c -o VECMATVector4.o

VECMATVector3.o:VECMATTools.h VECMATVector3.h VECMATVector2.c
	$(CC) $(FLAG) -c VECMATVector3.c -o VECMATVector3.o

VECMATVector2.o:VECMATTools.h VECMATVector2.h VECMATVector2.c
	$(CC) $(FLAG) -c VECMATVector2.c -o VECMATVector2.o

clean:
	rm -rf *.o
