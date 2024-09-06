#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
// la suma de todos los números que no están en la diagonal principal.

void main()
{
    int array[3][3];
    int suma = 0;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Ingrese valor de la fila %d columna %d ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
    for (int k = 0; k <= 2; k++)
    {
        for (int l = 0; l <= 2; l++)
        {
            if (k != l)
            {
                suma += array[k][l];
            }
        }
    }

    printf("La suma de los numeros deseados es: %d", suma);
}