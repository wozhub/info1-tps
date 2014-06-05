/*
 * Info I - Ing. Martin Marino
 * TP 5 Ejercicio 5
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf

int multiplicar ( int z, int v )
{
    if (v == 0) { return 0; }
    else if ( z < 0 && v < 0 ) { return multiplicar(-z,-v); } 
    else if ( v > 0 && z < 0 ) { return multiplicar(-z,-v); }
    else if ( v > 0 && z > 0 ) { return z+multiplicar(z,v-1); }
    else if ( v < 0 && z > 0 ) { return -z+multiplicar(z,v+1); }
}

void main()
{
    printf("6x4=%d\n",multiplicar(6,4) );
    printf("6x-4=%d\n",multiplicar(6,-4) );
    printf("-6x-4=%d\n",multiplicar(-6,-4) );
    printf("-6x4=%d\n",multiplicar(-6,4) );
}
