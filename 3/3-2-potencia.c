/*
 * Info I - Ing. Martin Marino
 * TP 3 Ejercicio 2
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // printf scanf

//prototipos
float potencia(int x, int y);

int main()
{
    int x,y; //base y potencia son enteros
    float p; //el resultado puede ser un float (si la potencia es negativa)

    printf("Potenciador x^y\n");
    printf("Introduzca la base:\nx=");
    scanf("%d",&x);
    printf("Introduzca la potencia:\ny=");
    scanf("%d",&y);

    p=potencia(x,y);
    printf("\n\n%d^%d=%f\n",x,y,p);

    return 0;
}

float potencia(int x, int y)
{
    float p; //elegi float para poder calcular las potencias negativas


    if (y>0) //para potencias positivas p=x^y
    {   p=1.0;
        
        int contador; //itero de 0 a Y multiplicando p por x
        for (contador=0;contador<y;contador++)
        { p=p*x; }
    }
    else //para potencias negativas p=1/(x^-y)
    { 
        int denominador=potencia(x,-y); //si y es <0 => -y>0
        p=(float) 1/denominador;
    }

    return p;
}

