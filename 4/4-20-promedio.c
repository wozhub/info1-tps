/*
 * Info I - Ing. Martin Marino
 * TP 4 Ejercicio 20
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf

#define tope 4

//headers
double promedio(double valores[*], int size); //devuelve un promedio de los valores de matriz[size]

int main()
{
    int i; //indice para el for
    double notas[tope];
    for (i=0;i<tope;i++)
    {   printf("Ingrese nota %d/%d: ",i+1,tope);
        scanf("%lf", &notas[i] ) ;
    }

    printf("promedio=%f\n", promedio(notas,tope) );

    return 0;
}

double promedio(double valores[], int size)
{
    double suma,promedio;
    
    int i; //indice para el for
    for (i=0;i<size;i++)
    { suma+=valores[i]; }

    promedio = (double) suma/size;
    
    return promedio;
}
