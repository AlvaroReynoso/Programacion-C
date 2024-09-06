#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 4. Dado el vector {10, 20, 5, 15, 30, 20}
// a. Informar el vector de la forma: "Índice: X, Valor: Y".
// b. Totalizar el vector e informar el total.
// c. Informar el contenido de las posiciones impares.
// d. Informar las posiciones que contienen números impares.
// e. Informar el mayor número.
// f.
// Informar cuántas veces aparece el número 20.
void main()
{
    int array[] = {10, 20, 5, 15, 30, 20};
    int suma = 0;
    int impar = 0;
    int par = 0;
    int max = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("El valor en la posicion %d es %d\n", i + 1, array[i]);
        suma += array[i];
        if (array[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        if (i == 0)
        {
            max = array[i];
        }
        else
        {
            if (array[i] > max)
            {
                max = array[i];
            }
        }
    }
    printf("La cantidad de num pares son: %d\n", par);
    printf("La cantidad de num impares son: %d\n", impar);
    printf("El num maximo es: %d\n", max);
}