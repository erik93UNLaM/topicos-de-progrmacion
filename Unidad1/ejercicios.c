#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long ejercicio1Factorial(int n)
{
    unsigned long resultado=1;
    int i;
    if(n==1)
        return 0;

    for(i=n; i>=1; i--)
    {
        resultado=resultado*i;
    }

    return resultado;
}

unsigned long ejercicio2Combinatorio(int m, int n)
{
    if(m<n)
    {
        printf("No cumple la condicion m>=n\n");
        return 0;
    }

    return ejercicio1Factorial(m)/(ejercicio1Factorial(n)*ejercicio1Factorial(m-n));

}


double ejercicio3Exponencial(int x, double tol)
{
    unsigned long aux,resultAux, exponente= 1;
    int cant=1,i;
    double resultado=0,termino=1;

    while (termino>tol)
    {
        for(i=1; i<=cant; i++)
        {
            exponente *= x; //De esta forma calculamos el exponente
        }
        aux=cant;
        resultAux=ejercicio1Factorial(aux);
        termino=exponente/(double)resultAux;// calculamos cuanto vale el termino
        resultado+=termino; // Agregamos el valor del termino al resultado final
        exponente=x;//iniciamos nuevamente en el valor x
        cant++; //Incrementamos la cantidad de veces que se multiplica
    }

    return resultado;
}


double ejercicio4RaizCuadrada(int a,double tol)
{
    double r1=1,terminoActual,dif=1;
    if(a==1){
        return r1;
    }

    while(fabs(dif)>tol){
        terminoActual=(0.5)*(r1+(a/r1));
        dif=terminoActual-r1;
        r1=terminoActual;
    }

return terminoActual;

}
