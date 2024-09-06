#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 1. Escribir un algoritmo que cree un arreglo de dimensión 7, asignarle un valor numérico cualquiera a cada posición y escribirlos en
// pantalla
void main()
{
    int array[]={2,3,4,1,6,7,8};
    for (int i = 0; i <7; i++)
    {
        printf("El valor %d es: %d\n",i+1,array[i]);
    }
    
}