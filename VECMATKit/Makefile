CC=gcc
FLAG=-Wall
DEPENDENCIES=VECMATTools.h VECMATVector2.h VECMATVector2.c VECMATVector3.h VECMATVector3.c VECMATVector4.h VECMATVector4.c VECMATMatrix2.h VECMATMatrix2.c VECMATMatrix3.h VECMATMatrix3.c VECMATMatrix4.h VECMATMatrix4.c

VECMATGlkit.o:$(DEPENDENCIES)
	$(CC) $(FLAG) -c VECMATGlkit.c -o VECMATGlkit.o

clean:
	rm -rf *.o
