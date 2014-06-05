/*
 * Info I - Ing. Martin Marino
 * TP 6 Ejercicio 47
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdbool.h> //bool
#include <stdio.h> // scanf printf

unsigned int maximo(int *matriz, unsigned int n, unsigned int m);

void main()
{
    unsigned int matriz[4][3]={ {1,2,3}, {14,5,6}, {7,8,9}, {11,2,3} };
    
    int auxY,auxX;

    for (auxY=0;auxY<3;auxY++) {
        for (auxX=0;auxX<3;auxX++) {
        printf("%d\t",matriz[auxY][auxX]);}
        printf("\n");
    }

    printf("Maximo de la Matriz=%d\n",maximo(&matriz[0][0],4,3));
}

unsigned int maximo(int *matriz, unsigned int n, unsigned int m)
{
   unsigned int i,j, maximo=0;
   
   for ( i=0; i<n; i++ )
   {    for ( j=0; j<m; j++)
	{
        if ( *(matriz+(i+j*n)) > maximo )
        { maximo = *(matriz+(i+j*n) ); }
	}
   }

    return maximo;   
}
