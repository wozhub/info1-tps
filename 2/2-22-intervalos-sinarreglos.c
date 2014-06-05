/*
 * Info I - Ing. Martin Marino
 * TP 2 Ejercicio 22 - Sin usar arreglos
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h>

typedef enum { false, true } bool;

int main()
{
    //los puntos a b c d e van a determinan 4 subintervalos iguales
    float a,b,c,d,e;
 
    //para el ingreso de reales
    float r;
    bool seguir=1;

    //contadores de ocurrencias de cada intervalo
    unsigned int c1=0,c2=0,c3=0,c4=0;

    printf("\n\nEje X\n");
    printf("           1     2     3     4 \n");
    printf("<-------a-----b-----c-----d-----e-------->\n\n");
    printf("Ingrese dos numeros (a y e) como extremos de un intervalo.\n");

    printf("a="); //extremo izquierdo del intervalo
    scanf("%f",&a);

    printf("e="); //extremo derecho del intervalo
    scanf("%f",&e);

    //calculo los puntos
    b=a+((e-a)*1/4);
    c=a+((e-a)*2/4);
    d=a+((e-a)*3/4);

    printf("\n");
    printf("Intervalo 1: [%f,%f)\n",a,b);
    printf("Intervalo 2: [%f,%f)\n",b,c);
    printf("Intervalo 3: [%f,%f)\n",c,d);
    printf("Intervalo 4: [%f,%f)\n",d,e);


    printf("\n\nIngrese valores para determinar a que intervalo pertenecen.\n\nPara terminar ingrese el valor del punto e (%f).\n",e);    
    while (seguir)
    {
    	printf("r=");
    	scanf("%f",&r);

        if (r==e) { seguir=0; }    //salir
	    if (r>=a && r<b) { c1++; } //primer intervalo
	    if (r>=b && r<c) { c2++; } //segundo intervalo
	    if (r>=c && r<d) { c3++; } //tercer intervalo
	    if (r>=d && r<e) { c4++; } //cuarto intervalo
    }

    printf("De los valores ingresados:\n");
    printf("%d estan incluidos en el intervalo 1.\n",c1);
    printf("%d estan incluidos en el intervalo 2.\n",c2);
    printf("%d estan incluidos en el intervalo 3.\n",c3);
    printf("%d estan incluidos en el intervalo 4.\n",c4);
    return 0;
}
