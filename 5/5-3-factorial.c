/*
 * Info I - Ing. Martin Marino
 * TP 5 Ejercicio 3
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf

unsigned int factorial ( int numero )
{
    if ( numero == 1 || numero < 0 ) { return 1; }
    else { return numero*factorial(numero-1); }
}

void main()
{
    int n;

    printf("Ingrese un numero para calcular su factorial:\nn=");
    scanf("%d",&n);
    printf("%d!=%d\n",n,factorial(n));
}
