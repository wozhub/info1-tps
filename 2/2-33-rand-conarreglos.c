/*
 * Info I - Ing. Martin Marino
 * TP 2 Ejercicio 33 - Usando Arreglos
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdlib.h>     /* srand, rand */
#include <stdio.h>      /* printf, scanf, puts, NULL */

#define maxvuelta 100000000

int main ()
{

  unsigned int ocurrencias[10]={0,0,0,0,0,0,0,0,0,0}; //contadores de ocurrencias en cero
  float porcentajes[10]={0,0,0,0,0,0,0,0,0,0}; //para el calculo de porcentajes
  int azar; //variable en la que voy a almacenar el numero al azar, me va a servir de indice tambien
  unsigned int vuelta; //variable para iterar
  
  printf("Voy a buscar %d numeros aleatorios entre 0 y 9, y contar su ocurrencia\n\n",maxvuelta);

  //itero de 0 a maxvuelta
  for (vuelta=0;vuelta<maxvuelta;vuelta++)
  { 
    azar=rand() % 10; //obtengo un numero al azar de 1 a 10
    ocurrencias[azar]++; //sumo una ocurrencia
  }

  //calulo los porcentajes de ocurrencias y muestro los resultados
  //iterando por los indices (de 0 a 10)
  for (vuelta=0;vuelta<10;vuelta++)
  { 
    porcentajes[vuelta]=(float) ocurrencias[vuelta]*100/maxvuelta;
    printf("El numero %d ocurrio %d veces, representando %f %% del total\n",vuelta,ocurrencias[vuelta],porcentajes[vuelta]);
  }

  return 0;
}
