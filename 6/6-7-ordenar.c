/*
 * Info I - Ing. Martin Marino
 * TP 6 Ejercicio 7
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <malloc.h>     //malloc y free
#include <stdio.h> // scanf printf
#include "vectores.h" //funciones de vectores

void main()
{
    unsigned int tope, comparaciones,intercambios;

    printf("Ingrese el nro entero de elementos del vector para crearlos aleatoriamente.\nn=");
    scanf("%d",&tope);

    int *vector = malloc( sizeof(int)*tope );
    int *auxiliar = malloc( sizeof(int)*tope ); //copia de la vector para probar los sorts

    llenarRandom(vector,tope);
    copiar(vector,auxiliar,tope);
    printf("Vector Original:\n");
    ver(vector,tope);
 
    seleccionMinimo(auxiliar,tope,&comparaciones,&intercambios);
    printf("\nOrdenado mediante Selection Sort (minimo) en %d comparaciones y %d intercambios\n",comparaciones,intercambios);
    ver(auxiliar,tope);
    
    copiar(vector,auxiliar,tope);
    burbuja(auxiliar,tope,&comparaciones,&intercambios);
    printf("\nOrdenado mediante Burbujeo en %d comparaciones y %d intercambios\n",comparaciones,intercambios);
    ver(auxiliar,tope);
    
    copiar(vector,auxiliar,tope);
    burbujaMejorada(auxiliar,tope,&comparaciones,&intercambios);
    printf("\nOrdenado mediante Burbujeo Mejorado en %d comparaciones y %d intercambios\n",comparaciones,intercambios);
    ver(auxiliar,tope);
}
