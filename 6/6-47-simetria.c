/*
 * Info I - Ing. Martin Marino
 * TP 6 Ejercicio 47
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdbool.h> //bool
#include <stdio.h> // scanf printf

bool verificaSimetria(int *matriz, unsigned int n);

void main()
{
    int matriz1[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} };
    int matriz2[3][3]={ {1,2,7}, {2,5,8}, {7,8,9} };

    int auxY,auxX;

    for (auxY=0;auxY<3;auxY++) {
        for (auxX=0;auxX<3;auxX++) {
        printf("%d\t",matriz1[auxY][auxX]);}
        printf("\n");
    }
    printf("Simetria Matriz 1=%d\n\n",verificaSimetria(&matriz1[0][0],3));
    
    for (auxY=0;auxY<3;auxY++) {
        for (auxX=0;auxX<3;auxX++) {
        printf("%d\t",matriz2[auxY][auxX]);}
        printf("\n");
    }
    printf("Simetria Matriz 2=%d\n\n",verificaSimetria(&matriz2[0][0],3));
}

bool verificaSimetria(int *matriz, unsigned int n)
{
   unsigned int i,j,ij,ji;
   int simetria=1;
   
   for ( i=0; i<n; i++ )
   {    for ( j=0; j<n; j++)
	{
        ij=*(matriz+(i+j*n)); ji=*(matriz+(j+i*n));
        if ( ij != ji ) { simetria=0; }
	}
   }

    return simetria;   
}
