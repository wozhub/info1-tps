/*
 * Info I - Ing. Martin Marino
 * TP 3 Ejercicio 8
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // printf scanf

//headers
double aFahrenheit(double); //funcion para transformar grados celsius en fahrenheit
double aCelsius(double); //funcion para transformar un grados fahrenheit en celsius

//Creo un objeto 'temperatura' con dos propiedades, valor y magnitud
typedef struct t_temperatura
{
    double valor;
    enum { CELSIUS, FAHRENHEIT } magnitud; // 0=>C 1=>F
} temperatura;

int main()
{
    temperatura t;
 
    do
    {
        printf("Ingrese magnitud:\n0 ) CELSIUS\n1 ) FAHRENHEIT\nt.magnitud=");
        scanf("%d",&t.magnitud);
    } while (t.magnitud!=0 && t.magnitud!=1);

    printf("\nIngrese valor:\nt.valor=");
    scanf("%f",&t.valor);

    printf("\n\n");

    if (t.magnitud==0) //el valor esta en celcius, lo convierto a fahrenheit
    {
        double f=aFahrenheit(t.valor);
        printf("CELSIUS=%f\n",t.valor);
        printf("FAHRENHEIT=%f\n",f);
    }
    else                //el valor esta en fahrenheit, lo convierto a celsius
    {
        double c=aCelsius(t.valor);
        printf("FAHRENHEIT=%f\n",t.valor);
        printf("CELSIUS=%f\n",c);
    }

    return 0;
}

double aFahrenheit(double valor)
{
    double f= (double) (valor*9/5)+32;
    return f;
}

double aCelsius(double valor)
{
    double c=(double) (valor-32)*5/9;
    return c;
}
