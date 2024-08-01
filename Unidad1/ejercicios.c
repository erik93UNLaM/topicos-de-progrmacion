#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned long ejercicio1Factorial(int n)
{
    unsigned long resultado=1;
    int i;
    if(n==0)
        return 1;

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

unsigned long exponente(int exp,int num)
{
    unsigned long result=1;
    int i=0;

    for(i=0; i<exp; i++)
    {
        result*=num;
    }
    return result;
}
double ejercicio3Exponencial(int x, double tol)
{
    unsigned long aux,resultAux;
    int cant=1;
    double resultado=0,termino=1;

    while (termino>tol)
    {

        aux=cant;
        resultAux=ejercicio1Factorial(aux);
        termino=exponente(cant,x)/(double)resultAux;// calculamos cuanto vale el termino
        resultado+=termino; // Agregamos el valor del termino al resultado final
//        expo=x;//iniciamos nuevamente en el valor x
        cant++; //Incrementamos la cantidad de veces que se multiplica
    }

    return resultado;
}



double ejercicio4RaizCuadrada(int a,double tol)
{
    double r1=1,terminoActual,dif=1;
    if(a==1)
    {
        return r1;
    }

    while(fabs(dif)>tol)
    {
        terminoActual=(0.5)*(r1+(a/r1));
        dif=terminoActual-r1;
        r1=terminoActual;
    }

    return terminoActual;

}

int ejercicio5PerteneceFibonacci(int n)
{
    int i, suma=1,resultAnt=1,aux;
    if(n==1)
        return 1;
    for(i=1; i<=n; i++)
    {
        aux=suma+resultAnt;
        resultAnt=suma;
        suma= aux;
        if(n==suma)
            return 1;

    }
    return 0;
}


double ejercicio6Seno(int x,double tol)
{
    double resultado=x,num=1,div=1;
    int cant=3,mult=1;
    while(abs(resultado)>tol)
    {
        num=exponente(cant,x);
        div=(double)ejercicio1Factorial(cant);
        resultado=resultado+(mult*(-1))*num/div;
        cant+=2;
    }
    return resultado;
}

char* ejercicio7(int n)
{
    int i,clasif,suma=0;
    static char clase[20]="";
    for (i=1; i<n; i++)
    {
        if(n%i==0)
        {
            suma+=i;
        }
    }
    clasif = n-suma;
    if(clasif>0)
    {
        strcpy(clase, "DEFICIENTE");
        return clase;
    }
    else if (clasif<0)
    {
        strcpy(clase, "ABUNDANTE");
        return clase;

    }
    strcpy(clase, "PERFECTO");
    return clase;


}


int ejercicio8Multiplicacion(int m1, int m2)
{
   int resultado=0,i;

   for (i=0;i<m2;i++){
    resultado+=m1;
   }
return resultado;

}
