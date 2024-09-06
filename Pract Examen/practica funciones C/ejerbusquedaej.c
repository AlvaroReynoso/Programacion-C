#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int busquedaNum(int array[5], int numeroABuscar);
void main()
{
    int array[] = {2, 5, 8, 6, 1};
    int numeroABuscar;
    int pos;
    printf("Ingrese numero: ");
    scanf("%d", &numeroABuscar);
    pos = busquedaNum(array, numeroABuscar);
    if (pos ==-1)
    {
        printf("No se encontro el numero");
    }
    else
    {
        printf("El num se encontro en la posicion %d",pos);
    }
}
int busquedaNum(int array[5],char numeroABuscar[2])
{
    int i = 0, pos = -1, encontrado = 0;
    while (encontrado == 0 && i < 5)
    {
        if (array[i] == numeroABuscar)
        {
            encontrado = 1;
            pos = i;
            i = 5;
        }
        i++;
    }
    return pos;
}