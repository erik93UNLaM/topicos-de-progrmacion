#include <stdio.h>
#include <stdlib.h>
#include "ejercicios.h"
int main()
{
    int n=3,n2=20,mm=8,nn=2;
    printf("Unidad 1!\n");
    printf("1-Factorial de %d es %lu\n",n, ejercicio1Factorial(n));
    printf("1-Factorial de %d es %lu\n",n2, ejercicio1Factorial(n2));
    printf("2-La combinatoria de %d en %d es %lu\n",mm,nn, ejercicio2Combinatorio(mm,nn));
/*
    int x=2;
    double tol=0.5;
    printf("3-Exponencial de %d con %f es %llu\n",x,tol, ejercicio3Exponencial(x,tol));
*/
    int r=4;
    double cota=0.05;
    printf("4-Raiz cuadrada de %d con cota %f es %f",r,cota,ejercicio4RaizCuadrada(r,cota));

    return 0;
}
