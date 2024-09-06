#include <stdio.h>
#include <stdlib.h>
// 7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
//  leer las notas por consola, mostrar la suma de sus componentes y el promedio.
void main()
{
    int cantNotas, contadorNotas = 0;
    float suma = 0, promedio = 0;
    printf("Ingrese la cant de notas para cargar: ");
    scanf("%d", &cantNotas);
    float totalNotas[cantNotas];
    for (int i = 0; i <= cantNotas - 1; i++)
    {
        printf("Ingrese la nota %d: ", i+1);
        scanf("%f", &totalNotas[i]);
        suma += totalNotas[i];
        contadorNotas++;
    }
    printf("La suma total es: %.2f\n",suma);
    printf("El promedio es: %.2f",promedio=suma/contadorNotas);
}