/*
 * Info I - Ing. Martin Marino
 * TP 4 Ejercicio 21
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf
#include <math.h> // pow 

#define tope 4

//headers
double promedio(double arreglo[], int size);
double varianza(double arreglo[],int size);
double desvio(double arreglo[], int size);

int main ()
{
    int i; //indice para el for
    double notas[tope];
    for (i=0;i<tope;i++)
    {   printf("Ingrese nota %d/%d: ",i+1,tope);
        scanf("%lf", &notas[i] ) ;
    }
    
    printf("desvio estandar=%f\n", desvio(notas,4) );

    return 0;
}

double promedio(double arreglo[], int size)
{
    double suma,pro;

    int i; //indice para el for
    for (i=0;i<size;i++)
    {   //d printf("promedio: sumando: %f\n",*(ptrArray+indice) );
        suma+=arreglo[i]; }

    pro = (double) suma/size;
    
    return pro;
}

double varianza(double arreglo[],int size)
{
    double suma,var;
    double pro=promedio(arreglo,size);

    int i; //indice para el for
    for (i=0;i<size;i++)
    { suma+= pow( arreglo[i],2 ); }

    var = (double) suma/pro;

    return var;
}

double desvio(double arreglo[], int size)
{
    double var=varianza(arreglo,size);
    double des=sqrt(var);

    return des;
}

