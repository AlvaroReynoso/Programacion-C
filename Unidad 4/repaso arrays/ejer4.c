#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//  Dado el vector {10, 20, 5, 15, 30, 20}
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
    int acum = 0, max = 0;
    int contadorImpar = 0, contadorPar = 0, contador20 = 0;
    for (int i = 0; i <= 5; i++)
    {
        acum += array[i];
        if (array[i] % 2 == 0)
        {
            contadorPar++;
        }
        else
        {
            contadorImpar++;
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
        if (array[i] == 20)
        {
            contador20++;
        }
    }
    printf("total array: %d\n", acum);
    printf("la cantidad de numeros pares son: %d\n", contadorPar);
    printf("la cantidad de numeros impares son: %d\n", contadorImpar);
    printf("El numero mas grande del array es: %d\n", max);
    printf("Las veces que aparece el 20 son: %d\n", contador20);
}