#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la 
// forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.  
void main()
{
    int arreglo[]={2,4,5,6,7};
    for (int i = 0; i <=4; i++)
    {
        printf("El indice %d tiene el valor guardado de: %d\n",i+1,arreglo[i]);
    }
}