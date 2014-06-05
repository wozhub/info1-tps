/*
 * Info I - Ing. Martin Marino
 * TP 6 Ejercicio 7 HEADERS
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

void ver(int *matriz, unsigned int tope); //muestra una matriz en pantalla
void llenarRandom(int *matriz, unsigned int tope); //llena una matriz con valores random
void intercambiar(int *pos1, int *pos2); //intercambio los valores entre dos pos de la matriz

int burbujaMejorada(int *matriz, unsigned int tope, unsigned int *compar, unsigned int *inter); //ordeno una matriz mediante el metodo bubblesort
int burbuja(int *matriz, unsigned int tope, unsigned int *compar, unsigned int *inter); //ordeno una matriz mediante el metodo bubblesort

int seleccionMinimo(int *matriz, unsigned int tope, unsigned int *compar, unsigned int *inter);
//ordeno una matriz mediante el metodo selection sort
//toma dos punteros a int donde contabiliza el numero de comparaciones e intercambios en el vector
//devuelve un entero con el numero de iteraciones realizadas en el vector

void copiar(int *origen, int *destino, unsigned int tope); //copia matrices[tope]

int quickSort(int *matriz, unsigned int tope, unsigned int base, unsigned int *compar, unsigned int *inter); //ordeno una matriz mediante el metodo quickSort
