/*
 * Info I - Ing. Martin Marino
 * TP 6 Ejercicio 48
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdbool.h> //bool
#include <stdio.h> // scanf printf

double traza(double *matriz, unsigned int n);

void main() {
    double matriz1[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} };
    
    int auxY,auxX;

    for (auxY=0;auxY<3;auxY++) {
        for (auxX=0;auxX<3;auxX++) {
        printf("%f\t",matriz1[auxY][auxX]);}
        printf("\n");
    }

    printf("Traza Matriz=%f\n",traza(&matriz1[0][0],3));
}

double traza(double *matriz, unsigned int n)
{
   unsigned int indice;
   double t=0;
   
   for ( indice=0; indice<(n*n); indice+=(n+1) ) {
       t+=*(matriz+indice); 

       #ifdef DEBUG
       printf("%f\n",t);
       #endif
   }

   return t;   
}
