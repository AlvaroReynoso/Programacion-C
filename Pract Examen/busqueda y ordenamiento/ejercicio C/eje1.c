#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define LONG 3
void ordenamiento(int array[LONG][LONG], int columnaOrd);
void mostrar(int array[LONG][LONG]);
void main()
{
    int array[LONG][LONG];
    for (int i = 0; i < LONG; i++)
    {
        for (int j = 0; j < LONG; j++)
        {
            printf("Ingrese un valor: ");
            scanf("%d", &array[i][j]);
        }
    }
    mostrar(array);
    ordenamiento(array, 0);
    mostrar(array);
}

void ordenamiento(int array[LONG][LONG], int columnaOrd)
{
    int aux;
    for (int i = 0; i < LONG - 1; i++)
    {
        for (int j = i + 1; j < LONG; j++)
        {
            if (array[j][columnaOrd] < array[i][columnaOrd])
            {
                for (int k = 0; k < LONG; k++)
                {
                    aux = array[i][k];
                    array[i][k] = array[j][k];
                    array[j][k] = aux;
                }
            }
        }
    }
}
void mostrar(int array[LONG][LONG])
{
    for (int i = 0; i < LONG; i++)
    {
        for (int k = 0; k < LONG; k++)
        {
            printf("%d ", array[i][k]);
        }
        printf("\n");
    }
}