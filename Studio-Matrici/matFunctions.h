#ifndef matFunctions_h
#define matFunctions_h

#include <stdio.h>
#define MAXDIM 4
int mat2x2 (int v[][MAXDIM], int dim);
int mat3x3 (int v[][MAXDIM], int dim);
int mat4x4 (int v[][MAXDIM], int dim);
void inversa2x2 (int v[][MAXDIM], int dim, double matInversaDouble[][MAXDIM]);
void trasposta (int v[][MAXDIM], int dim, int matTrasposta[][MAXDIM]);
void inversa3x3 (int v[][MAXDIM], int dim, double matInversaDouble[][MAXDIM]);
void autovalori (int v[][MAXDIM], int dim, double* lamda1, double* lamda2);


#endif
