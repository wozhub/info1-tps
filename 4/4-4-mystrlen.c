/*
 * Info I - Ing. Martin Marino
 * TP 4 Ejercicio 4
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf

#define MAX_CADENA 80

//headers
int my_strlen(char *palabra);

int main()
{
    //recorrer una string
    char palabra[MAX_CADENA];

    printf("Ingrese palabra:\n");
    scanf("%s",&palabra);

    int len=my_strlen(&palabra[0]); //le paso puntero a la posicion 0 del array

    printf("La palabra '%s' contiene %d chars. (Contando '\\0')\n\n",palabra,len);

    return 0;
}

int my_strlen(char *palabra)
{
    unsigned int indice;
    //a=*a11; b=*(a11+1); c=*(a11+2); d=*(a11+3);
    for (indice=0; *(palabra+indice)!='\0'; indice++)
    { //itero por la string buscando el \0
      //printf("%c\n",*(palabra+indice)); //[DEBUG MODE]
    }   

    indice++; //le sumo 1 por el \0
    return indice;
}
