# Trabajo Práctico #4

## 4.4. MyStrLen

Escribir una función que reciba como argumento puntero a una secuencia de bytes, la asuma como una secuencia en ASCII terminada en 0 (a los fines de la evaluación, este carácter en C es '\0'), calcule su longitud y la retorne de acuerdo al siguiente prototipo:
```C 
int my_strlen (const char *);
```

## 4.5. MyStrCpy

Escribir una función que reciba un puntero a caracter "s" y un puntero a caracter "t", y copie la “s” en “t”, terminando la cadena con el caracter '\0' (Función `strcpy()` de la biblioteca `<string.h>`). El prototipo de la función pedida es:

```C 
void my_strcpy (char *t, const char *s);
```

## 4.6. MyStrCat 

Escribir una función que reciba como argumentos dos punteros a char “t” y “s”, que apunta cada uno a una secuencia de bytes terminados en '/0', y realice la concatenación de la secuencia “s” a continuación de la secuencia “t”, terminando la secuencia de bytes resultante con el caracter '\0' (Función `strcat()` de la biblioteca `<string.h>`). El prototipo de la función pedida es:

```C 
void my_strcat (char *t, const char *s) ;
```

Nota: ¿Donde deben tomarse los recaudos para que el puntero destino posea la memoria necesaria?. Si no es en su función especifique donde y como se debe salvar esta situación, mediante un comentario en el encabezado de su programa fuente.

## 4.7. MyStrCmp

Escribir una función que reciba dos punteros a char como argumentos, realice una comparación lexicográfica de las secuencias de bytes finalizadas en '/0' apuntadas por cada uno, y retorne valores positivos, cero y negativos, según corresponda. (Función `strcmp()` de la biblioteca `<string.h>`). El prototipo de la función pedida es:

```C 
int my_strcmp (const char *t, const char *s) ;
```

## 4.12. ChangeCase

Escribir una función que reciba una cadena de caracteres como argumento, y la convierta a minúsculas o mayúsculas, de acuerdo a una opción ingresada por el usuario a través del parámetro "format", cuyo tipo es case, un tipo enumerativo compuesto por los tokens UPPERCASE y LOWERCASE:

```C 
typedef enum { UPPERCASE, LOWERCASE } case;
```

Prototipo de la función pedida:

```C
void change_case (char * , case );
```

Nota: Implemente esta función invocando a las dos funciones de los ejercicios previos.

## 4.20. Promedio

Escribir una función que reciba un puntero a una secuencia de doubles y su longitud como parámetros, y retorne el promedio aritmético de los valores contenidos en él.

## 4.21. Desvio

Idem para el desvío estándar.

Nota: reutilice el código desarrollado en el ejercicio anterior.

