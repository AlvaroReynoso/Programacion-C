#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
// leer las notas por consola, mostrar la suma de sus componentes y el promedio.
void main()
{
    int cantNotas;
    float suma = 0, promedio = 0;
    printf("Ingrese cantidad de notas a ingresar: ");
    scanf("%d", &cantNotas);
    float array[cantNotas];
    for (int i = 0; i < cantNotas; i++)
    {
        printf("Ingrese nota %d: ", i + 1);
        scanf("%f", &array[i]);
        suma+=array[i];
    }
    promedio=suma/cantNotas;
    printf("La suma total es: %.2f\n",suma);
    printf("El promedio es: %.2f\n",promedio);
}