/*
 * Info I - Ing. Martin Marino
 * TP 2 Ejercicio 12
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h>

int main()
{
    int numero1,numero2;
    int suma; //inicio la variable suma en 0

    printf("Ingrese dos numeros enteros como extremos de la sumatoria de consecutivos.\n");

    printf("numero1 = "); //extremo izquierdo del intervalo a sumar
    scanf("%d",&numero1);

    printf("numero2 = "); //extremo derecho del intervalo a sumar
    scanf("%d",&numero2);

    //la suma inicia en 0, mientras n1 sea menora n2, n1++
    for (suma=0;numero1 <= numero2;numero1++)
    {
        #ifdef DEBUG
        printf("Sumando %d\n",numero1);
        #endif

	    suma+=numero1;  //sumo
    }

    printf("Total = %d\n",suma);

    return 0;
}
