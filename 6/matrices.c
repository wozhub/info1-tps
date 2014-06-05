#include <stdio.h>      //scanf y printf
#include <stdlib.h>     //rand y srand
#include "matrices.h" //headers

int seleccionMinimo(int *matriz, unsigned int tope, unsigned int *compar, unsigned int *inter)
{
    *compar=0; *inter=0;
    unsigned int minimo,vuelta,posicion; //variables para la iteracion
    for (vuelta=0; vuelta<(tope-1); vuelta++) //la ultima vuelta no es necesaria
    {
        minimo=vuelta; //considero que el valor minimo ya esta en su posicion correcta
        for (posicion=vuelta+1; posicion<tope; posicion++) //itero por las posiciones a la derecha buscando 
        {
            if ( matriz[posicion] < matriz[minimo] ) //si encuentro un valor menor
            {   minimo=posicion; }   //me guardo la pos
	        *compar+=1;
        }

        intercambiar(&matriz[vuelta],&matriz[minimo]); //pongo el menor valor a la izquierda
	    *inter+=1;
    }
    return vuelta;
}

int burbujaMejorada(int *matriz, unsigned int tope, unsigned int *compar, unsigned int *inter)
{
    unsigned int vuelta, posicion, desorden=1; //creo un indice de vueltas y considero la matriz desordenada para entrar en el for
    *compar=0; *inter=0;
    for (vuelta=0; (vuelta<tope) && (desorden==1);vuelta++)
    {   //d printf("Vuelta %d\n",vuelta);
        desorden=0; //considero la matriz ordenada si no cambio esto por una vuelta
        for (posicion=0;posicion<tope-1;posicion++) //la ultima posicion va a quedar ordenada por el tipo de sort
        {
            if ( matriz[posicion] > matriz[posicion+1] )
            {
                intercambiar(&matriz[posicion],&matriz[posicion+1]);
                desorden=1; //si hice un cambio, la matriz esta desordenada
		(*inter)++;
            }
	    (*compar)++;
        }
        //d ver(matriz);
    }
    return vuelta;
}

int burbuja(int *matriz, unsigned int tope, unsigned int *compar, unsigned int *inter)
{
    unsigned int vuelta, posicion; //creo un indice de vueltas y considero la matriz desordenada para entrar en el for
    *compar=0; *inter=0;
    for (vuelta=0; vuelta<tope ;vuelta++)
    {   //d printf("Vuelta %d\n",vuelta);
        for (posicion=0;posicion<tope-1;posicion++) //la ultima posicion va a quedar ordenada por el tipo de sort
        {
            if ( matriz[posicion] > matriz[posicion+1] )
            {   intercambiar(&matriz[posicion],&matriz[posicion+1]);
		(*inter)++; }
	    (*compar)++;
        }
        //d ver(matriz);
    }
    return vuelta;
}

void ver(int *matriz, unsigned int tope)
{
    int i;
    for (i=0;i<tope;i++) { printf("%d  ",matriz[i]); }
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

void llenarRandom(int *matriz, unsigned int tope)
{
    srand (time(NULL));
    int i;
    for (i=0;i<tope;i++) { matriz[i]=(rand() % 100); }
}

void copiar(int *origen, int *destino, unsigned int tope)
{
    unsigned int i;
    for (i=0;i<tope;i++) { destino[i]=origen[i]; }
}


