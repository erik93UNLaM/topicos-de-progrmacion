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
    double cota=0.000005;
    printf("4-Raiz cuadrada de %d con cota %f es %f\n",r,cota,ejercicio4RaizCuadrada(r,cota));
    int fibo=4;
    printf("5-El numero %d. Pertenece a fibonacci? %s\n",fibo,ES_CIERTO(ejercicio5PerteneceFibonacci(fibo)));
    int seno=5;
    double tolSeno=0.05;
   // printf("6-El seno de %d en radianes es %f",seno,ejercicio6Seno(seno,tolSeno));
    int numb=12;
    printf("7-El numero %d es %s\n",numb,ejercicio7(numb));
    int m1=0,m2=4;
    printf("8-La multiplicacion de %d y %d es %d\n",m1,m2,ejercicio8Multiplicacion(m1,m2));
    return 0;
}
