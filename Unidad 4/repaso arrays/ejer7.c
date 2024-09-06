#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
// leer las notas por consola, mostrar la suma de sus componentes y el promedio.
void main()
{
    int cantCarga;
    float acum = 0,contador=0;
    printf("Cuantas notas quiere cargar?: ");
    scanf("%d", &cantCarga);
    float array[cantCarga];
    for (int i = 0; i < cantCarga; i++)
    {
        printf("Ingrese nota %d: ", i + 1);
        scanf("%f", &array[i]);
        acum+=array[i];
        contador++;
    }
    printf("La suma total de notas es: %.2f\n",acum);
    printf("El promedio del total de notas es: %.2f",acum/contador);
    
}