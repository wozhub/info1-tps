/*
 * Info I - Ing. Martin Marino
 * TP 4 Ejercicio 5
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf

#define MAX_SIZE 40

//headers
int my_strcpy(char* origen, char* destino);
//Nota: la funcion my_strcpy asume que el arreglo destino es igual o mayor que origen.
//no esta definido el comportamiento para otros casos

int main()
{
    char origen[MAX_SIZE];
    char destino[MAX_SIZE];

    printf("Introduzca la palabra a copiar\n");
    scanf("%s",&origen);
 
    my_strcpy(&origen[0],&destino[0]);

    printf("origen=%s\ndestino=%s\n",origen,destino);

    return 0;
}

int my_strcpy(char* origen, char* destino)
{
    unsigned int indice=0;
    
    while ( *(origen+indice) != '\0' )
    {
        printf("Copiando %c\n",*(origen+indice));
        *(destino+indice)=*(origen+indice);
        indice++;
    };

    //cierro el array destino
    *(destino+indice)='\0';

    return 0;
}
