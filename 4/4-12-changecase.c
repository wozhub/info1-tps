/*
 * Info I - Ing. Martin Marino
 * TP 4 Ejercicio 12
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf

#define MAX_SIZE 20

typedef enum { UPPERCASE, LOWERCASE } Formato;

//headers
int change_case(char *palabra, Formato f);

int main()
{
    Formato f=0;
    char palabra[MAX_SIZE];
    
    do
    {
        printf("Ingrese formato destino:\n0 ) UPPERCASE\n1 ) LOWERCASE\nformato=");
        scanf("%d",&f);
    } while ( f!=0 && f!=1 );


    printf("Introduzca la palabra a transformar.\nNota: el arreglo tiene un maximo de %d chars.\nPalabra: ",MAX_SIZE);
    scanf("%s",&palabra);

    change_case(&palabra[0],f);

    printf("transformada: %s\n",palabra);
}

int change_case(char *palabra, Formato f)
{
    unsigned int indice;
    for (indice=0; *(palabra+indice)!='\0'; indice++)
    {
//d        printf("ascii code:%d\t",*(palabra+indice) );
//d        printf("ascii char:%c\t",*(palabra+indice) );

        //si voy a convertir en mayusculas, me fijo que el char este entre a y z
       if ( f==0 && *(palabra+indice) >= 'a' && *(palabra+indice) <= 'z' )
       {
//d            printf("ascii char:%c\n",*(palabra+indice)+'A'-'a' );
            *(palabra+indice)=(*(palabra+indice)+'A'-'a');
       }
       //si voy a convertir en minusculas, me fijo quee el char este entre A y Z
       else if ( f==1 && *(palabra+indice) >= 'A' && *(palabra+indice) <= 'Z' )
       {
//d            printf("ascii char:%c\n",*(palabra+indice)-'A'+'a' );
            *(palabra+indice)=(*(palabra+indice)-'A'+'a');
       }
       else //si no entro en ningun if, el char ya esta en el case necesario =)
       {
//d            printf("ascii char:%c\n",*(palabra+indice));
       }
    }   

    return 0;
}
