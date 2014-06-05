/*
 * Info I - Ing. Martin Marino
 * TP 2 Ejercicio 22 - Usando Arreglos
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h>

typedef enum { false, true } bool;

int main()
{
    //los puntos a b c d e van a determinan 4 subintervalos iguales
    float puntos[5]; //a,b,c,d,e   
    unsigned int ocurrencias[5]={0,0,0,0,0}; //contadores de ocurrencias de cada intervalo
    unsigned int indice; //variable para iterar por los indices
    float r; //para el ingreso de reales
    bool seguir=1;

    printf("\n\nEje X\n");
    printf("           1     2     3     4 \n");
    printf("<-------a-----b-----c-----d-----e-------->\n\n");
    printf("Ingrese dos numeros (a y e) como extremos de un intervalo.\n");

    printf("a="); //extremo izquierdo del intervalo
    scanf("%f",&puntos[0]);

    printf("e="); //extremo derecho del intervalo
    scanf("%f",&puntos[4]);

    //calculo los puntos
    puntos[1]=puntos[0]+((puntos[4]-puntos[0])*1/4); //b
    puntos[2]=puntos[0]+((puntos[4]-puntos[0])*2/4); //c
    puntos[3]=puntos[0]+((puntos[4]-puntos[0])*3/4); //d

    printf("\n");
    for(indice=0;indice<4;indice++)
    { printf("Intervalo %d: (%f,%f]\n",indice+1,puntos[indice],puntos[indice+1]); }
    printf("Nota: El ultimo intervalo no incluye su extremo derecho!\n");

    printf("\n\nIngrese valores para determinar a que intervalo pertenecen.\n\nPara terminar ingrese el valor del punto e (%f).\n",puntos[4]);    
    while (seguir)
    {
    	printf("r=");
    	scanf("%f",&r);

        if (r==puntos[4]) { seguir=0; } //salir
        else if (r>puntos[0] && r<puntos[4]) //solo si r cae entre los intervalos (los extremos no incluidos)
        {
            for(indice=1;indice<5;indice++) //itero por los indices buscando el intervalo adecuado
            {   
                if (r<=puntos[indice])
                {   ocurrencias[indice-1]++; //lo sumo en el intenvalo
                    printf("%f esta incluido en el intervalo %d.\n",r,indice);
                    break; //salgo del for
                }
            }
        }
        else { printf("Me diste un r fuera del rango (%f,%f)!\n",puntos[0],puntos[4]); }
    }

    printf("De los valores ingresados:\n");
    for(indice=0;indice<4;indice++)
    { printf("%d estan incluidos en el intervalo %d.\n",ocurrencias[indice],indice+1); }

    return 0;
}
