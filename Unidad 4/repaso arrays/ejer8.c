#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
// 10 números en pantalla mediante un solo array.
void main()
{
    int array1[5];
    int array2[5];
    int arrayTotal[10];
    int i, j, k;
    for ( i = 0; i <= 4; i++)
    {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    for ( j = 0; j <= 4; j++)
    {
        printf("Ingrese el valor %d: ", j + 6);
        scanf("%d", &array2[j]);
    }
    for ( k = 0; k <= 4; k++)
    {
        arrayTotal[k] = array1[k];
    }
    for ( int l = 0; l <= 4; l++)
    {
        arrayTotal[l + 5] = array2[l];
    }
    for (int m = 0; m <= 9; m++)
    {
        printf("Los numeros son: %d\n", arrayTotal[m]);
    }
}