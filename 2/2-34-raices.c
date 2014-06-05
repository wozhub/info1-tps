/*
 * Info I - Ing. Martin Marino
 * TP 2 Ejercicio 34
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h>
#include <math.h> // sqrt 

int main()
{
    int a,b,c;

    printf("Ingrese los coeficientes de la cuadratica ax^2+bx+c\n");

    //requiero los coeficientes
    printf("a = "); 
    scanf("%d",&a);
    printf("b = "); 
    scanf("%d",&b);
    printf("c = "); 
    scanf("%d",&c);

    //calculo el determinante
    int deter=b*b-4*a*c;
    //printf("determinante = %d\n",deter);

    if (deter<0) { printf("sus dos raices son imaginarias!\n"); }
    else
    {
	    float r1=(-b+sqrt(deter))/2*a;
	    float r2=(-b-sqrt(deter))/2*a;

	    printf("Raices: x1=%f x2=%f\n",r1,r2);
    }
    return 0;
}
