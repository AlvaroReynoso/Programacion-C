#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
// suma de sus componentes y el promedio.
void main()
{
    int arreglo[5];
    int acum = 0, promedio = 0,contador=0;
    for (int i = 0; i <= 4; i++)
    {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        acum += arreglo[i];
        contador++;
    }
    printf("La suma de todo el array es: %d\n", acum);
    printf("El promedio del array es: %d\n", promedio=acum/contador);
}