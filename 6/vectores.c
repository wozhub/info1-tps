#include <stdio.h>      //scanf y printf
#include <stdlib.h>     //rand y srand
#include "vectores.h" //headers

int seleccionMinimo(int *vector, unsigned int tope, unsigned int *compar, unsigned int *inter)
{
    *compar=0; *inter=0;
    unsigned int minimo,vuelta,posicion; //variables para la iteracion
    for (vuelta=0; vuelta<(tope-1); vuelta++) //la ultima vuelta no es necesaria
    {
        minimo=vuelta; //considero que el valor minimo ya esta en su posicion correcta
        for (posicion=vuelta+1; posicion<tope; posicion++) //itero por las posiciones a la derecha buscando 
        {
            if ( vector[posicion] < vector[minimo] ) //si encuentro un valor menor
            {   minimo=posicion; }   //me guardo la pos
	        *compar+=1;
        }

        intercambiar(&vector[vuelta],&vector[minimo]); //pongo el menor valor a la izquierda
	    *inter+=1;
    }
    return vuelta;
}

int burbujaMejorada(int *vector, unsigned int tope, unsigned int *compar, unsigned int *inter)
{
    unsigned int vuelta, posicion, desorden=1; //creo un indice de vueltas y considero la vector desordenada para entrar en el for
    *compar=0; *inter=0;
    for (vuelta=0; (vuelta<tope) && (desorden==1);vuelta++)
    {   //d printf("Vuelta %d\n",vuelta);
        desorden=0; //considero la vector ordenada si no cambio esto por una vuelta
        for (posicion=0;posicion<tope-1;posicion++) //la ultima posicion va a quedar ordenada por el tipo de sort
        {
            if ( vector[posicion] > vector[posicion+1] )
            {
                intercambiar(&vector[posicion],&vector[posicion+1]);
                desorden=1; //si hice un cambio, la vector esta desordenada
		(*inter)++;
            }
	    (*compar)++;
        }
        //d ver(vector);
    }
    return vuelta;
}

int burbuja(int *vector, unsigned int tope, unsigned int *compar, unsigned int *inter)
{
    unsigned int vuelta, posicion; //creo un indice de vueltas y considero la vector desordenada para entrar en el for
    *compar=0; *inter=0;
    for (vuelta=0; vuelta<tope ;vuelta++)
    {   //d printf("Vuelta %d\n",vuelta);
        for (posicion=0;posicion<tope-1;posicion++) //la ultima posicion va a quedar ordenada por el tipo de sort
        {
            if ( vector[posicion] > vector[posicion+1] )
            {   intercambiar(&vector[posicion],&vector[posicion+1]);
		(*inter)++; }
	    (*compar)++;
        }
        //d ver(vector);
    }
    return vuelta;
}

void ver(int *vector, unsigned int tope)
{
    int i;
    for (i=0;i<tope;i++) { printf("%d  ",vector[i]); }
    printf("\n");
}

void intercambiar(int *pos1, int *pos2)
{
    if (pos1 != pos2) //verifico que no sean la misma posicion de memoria
    {
        //d printf("Intercambiando %d <-> %d\n",*pos1,*pos2);
        int aux=*pos1;
        *pos1=*pos2;
        *pos2=aux;
    }
}

void llenarRandom(int *vector, unsigned int tope)
{
    srand (time(NULL));
    int i;
    for (i=0;i<tope;i++) { vector[i]=(rand() % 100); }
}

void copiar(int *origen, int *destino, unsigned int tope)
{
    unsigned int i;
    for (i=0;i<tope;i++) { destino[i]=origen[i]; }
}


