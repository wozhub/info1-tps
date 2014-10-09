/*
 * Info I - Ing. Martin Marino
 * TP 2 Ejercicio 33 - Sin usar arreglos
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdlib.h>     /* srand, rand */
#include <stdio.h>      /* printf, scanf, puts, NULL */

#define maxvuelta 100000000

int main ()
{
  //contadores de ocurrencias en cero
  int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
  int azar;
  
  //srand (time(NULL));
  printf("Voy a buscar %d numeros aleatorios entre 0 y 9, y contar su ocurrencia\n\n",maxvuelta);

  unsigned int vuelta;
  for (vuelta=0;vuelta<maxvuelta;vuelta++)
  { 
    azar=rand() % 10; //obtengo un numero al azar de 1 a 10

    #ifdef DEBUG
    printf("azar = %d\n",azar);
    #endif

    //sumo 1 al contador de ocurrencias que corresponda
    switch(azar){
        case 0: c0++; break;
        case 1: c1++; break;
        case 2: c2++; break;
        case 3: c3++; break;
        case 4: c4++; break;
        case 5: c5++; break;
        case 6: c6++; break;
        case 7: c7++; break;
        case 8: c8++; break;
        case 9: c9++; break;
    }
  }

  //calulo los porcentajes de ocurrencias
  float p0,p1,p2,p3,p4,p5,p6,p7,p8,p9;
  p0=(float) c0*100/vuelta;
  p1=(float) c1*100/vuelta;
  p2=(float) c2*100/vuelta;
  p3=(float) c3*100/vuelta;
  p4=(float) c4*100/vuelta;
  p5=(float) c5*100/vuelta;
  p6=(float) c6*100/vuelta;
  p7=(float) c7*100/vuelta;
  p8=(float) c8*100/vuelta;
  p9=(float) c9*100/vuelta;

  //muestro los resultados
  printf("El 0 ocurrio %d veces, representando %f %% del total\n",c0,p0);
  printf("El 1 ocurrio %d veces, representando %f %% del total\n",c1,p1);
  printf("El 2 ocurrio %d veces, representando %f %% del total\n",c2,p2);
  printf("El 3 ocurrio %d veces, representando %f %% del total\n",c3,p3);
  printf("El 4 ocurrio %d veces, representando %f %% del total\n",c4,p4);
  printf("El 5 ocurrio %d veces, representando %f %% del total\n",c5,p5);
  printf("El 6 ocurrio %d veces, representando %f %% del total\n",c6,p6);
  printf("El 7 ocurrio %d veces, representando %f %% del total\n",c7,p7);
  printf("El 8 ocurrio %d veces, representando %f %% del total\n",c8,p8);
  printf("El 9 ocurrio %d veces, representando %f %% del total\n",c9,p9);

  return 0;
}
