/*
 * Info I - Ing. Martin Marino
 * TP 6 Ejercicio 7 HEADERS
 * David Vinazza - Curso R1041 (Lunes 14:15, Medrano)
*/

void ver(int *vector, unsigned int tope); //muestra un vector en pantalla
void llenarRandom(int *vector, unsigned int tope); //llena un vector con valores random
void intercambiar(int *pos1, int *pos2); //intercambio los valores entre dos pos de la vector

int burbujaMejorada(int *vector, unsigned int tope, unsigned int *compar, unsigned int *inter); //ordeno un vector mediante el metodo bubblesort
int burbuja(int *vector, unsigned int tope, unsigned int *compar, unsigned int *inter); //ordeno un vector mediante el metodo bubblesort

int seleccionMinimo(int *vector, unsigned int tope, unsigned int *compar, unsigned int *inter);
//ordeno un vector mediante el metodo selection sort
//toma dos punteros a int donde contabiliza el numero de comparaciones e intercambios en el vector
//devuelve un entero con el numero de iteraciones realizadas en el vector

void copiar(int *origen, int *destino, unsigned int tope); //copia vectores[tope]

int quickSort(int *vector, unsigned int tope, unsigned int base, unsigned int *compar, unsigned int *inter); //ordeno un vector mediante el metodo quickSort
