/*
 * Info I - Ing. Martin Marino
 * TP 6 Ejercicio 7
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <malloc.h>     //malloc y free
#include <stdio.h> // scanf printf
#include "matrices.h" //funciones de matrices

void main()
{
    unsigned int tope, comparaciones,intercambios;

    printf("Ingrese el nro entero de elementos del vector a crear aleatoriamente.\nn=");
    scanf("%d",&tope);

    int *matriz = malloc( sizeof(int)*tope );
    int *auxiliar = malloc( sizeof(int)*tope ); //copia de la matriz para probar los sorts

    llenarRandom(matriz,tope);
    copiar(matriz,auxiliar,tope);
    printf("Matriz Original:\n");
    ver(matriz,tope);
 
    seleccionMinimo(auxiliar,tope,&comparaciones,&intercambios);
    printf("\nOrdenado mediante Selection Sort (minimo) en %d comparaciones y %d intercambios\n",comparaciones,intercambios);
    ver(auxiliar,tope);
    
    copiar(matriz,auxiliar,tope);
    burbuja(auxiliar,tope,&comparaciones,&intercambios);
    printf("\nOrdenado mediante Burbujeo en %d comparaciones y %d intercambios\n",comparaciones,intercambios);
    ver(auxiliar,tope);
    
    copiar(matriz,auxiliar,tope);
    burbujaMejorada(auxiliar,tope,&comparaciones,&intercambios);
    printf("\nOrdenado mediante Burbujeo Mejorado en %d comparaciones y %d intercambios\n",comparaciones,intercambios);
    ver(auxiliar,tope);
}
