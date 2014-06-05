/*
 * Info I - Ing. Martin Marino
 * TP 2 Ejercicio 37
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c; //los coeficientes de la cuadratica
    float r1,r2; //las raices
    unsigned int intentos=0;

    while (intentos<2)
    {
    	printf("\n\nIngrese los coeficientes de la cuadratica ax^2+bx+c\n");

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

    	if (deter<0)
	    {
	        printf("sus dos raices son imaginarias!\n");
  	        intentos++;
	    }
    	else
   	    {
	        r1=(-b+sqrt(deter))/2*a;
	        r2=(-b-sqrt(deter))/2*a;

	        printf("Raices: x1=%f x2=%f\n",r1,r2);

	        intentos=0; // reinicio el contador de intentos
	    }
    }

    return 0;
}
