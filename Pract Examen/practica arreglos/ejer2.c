#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 2. Escribir un algoritmo que permita al usuario ingresar 5 números y luego imprimirlos en pantalla
void main()
{
    int array[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el num %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("El valor %d es: %d\n", i + 1, array[i]);
    }
}