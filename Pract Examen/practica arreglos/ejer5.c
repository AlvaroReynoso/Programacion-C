#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 5. Realice un algoritmo que lea en un arreglo las marcas obtenidas por 10 corredores en una carrera e imprimir cuántos tienen una
// marca mayor, cuántos tienen una marca menor que el promedio y el promedio.
void main()
{
    float arregloMarcas[10];
    float suma = 0, promedio;
    int contPromMenor = 0, contPromMayor = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese la marca del corredor %d: ", i + 1);
        scanf("%f", &arregloMarcas[i]);
        suma += arregloMarcas[i];
    }
    promedio = suma / 10;
    {
        for (int i = 0; i < 10; i++)
        {
            if (arregloMarcas[i] >= promedio)
            {
                contPromMayor++;
            }
            else
            {
                if (arregloMarcas[i] < promedio)
                {
                    contPromMenor++;
                }
            }
        }
    }

    printf("El promedio general es: %.2f\n", promedio);
    printf("Cantidad de marcas menores al promedio: %d\n", contPromMenor);
    printf("Cantidad de marcas mayores al promedio: %d\n", contPromMayor);
}