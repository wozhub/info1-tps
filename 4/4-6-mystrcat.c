/*
 * Info I - Ing. Martin Marino
 * TP 4 Ejercicio 6
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

#include <stdio.h> // scanf printf

#define MAX_SIZE 40

//headers
int my_strcat (char *t, char *s);

int main()
{
    char t[MAX_SIZE*2];
    char s[MAX_SIZE];

    printf("Introduzca dos palabras a concatenar.\n");

    printf("t: "); scanf("%s",&t);
    printf("s: "); scanf("%s",&s);

    my_strcat(&t[0],&s[0]);

    printf("\n\nconcatenadas:%s\n",t);
}

int my_strcat (char *t, char *s)
{

    unsigned int indiceT;
    unsigned int indiceS;

    //primero busco la pos final de t
    for (indiceT=0; *(t+indiceT)!='\0'; indiceT++)
    {  }

    //concateno
    for (indiceS=0; *(s+indiceS)!='\0'; indiceS++)
    {   
        *(t+indiceT)=*(s+indiceS);
        indiceT++;
    }
    
    //cierro la string t
    *(t+indiceT)='\0';

    return 0;
}
