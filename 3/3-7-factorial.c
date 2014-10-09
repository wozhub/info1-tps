/*
 * Info I - Ing. Martin Marino
 * TP 3 Ejercicio 7
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // printf scanf

//prototipo
int factorial(int x);

int main()
{
    int x;
    unsigned long f; //elegi usar unsigned long porque los factoriales son siempre enteros positivos

    printf("Factorial(x) = x!\n");
    printf("x=");
    scanf("%d",&x);

    if (x<0)
    {   printf("Mi funcion Factorial solo admite valores naturales!\nVoy a usar el opuesto.\n"); x=-x;
        printf("Ahora x=%d\n",x); }

    if (x>=17) { printf("Alto Overflow!\n"); }
    else {  f=factorial(x);
            printf("\n%d!=%d\n",x,f); }

    return 0;
}

int factorial(int x)
{
    unsigned long factorial=1;
 
    unsigned contador;
    for (contador=1;contador<=x;contador++) { 
        #ifdef DEBUG
        printf("%d*%d\n",factorial,contador);
        #endif  
        
        factorial=factorial*contador; }

    return factorial;
}
