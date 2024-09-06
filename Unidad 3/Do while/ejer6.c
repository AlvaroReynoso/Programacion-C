#include <stdio.h>
#include <stdlib.h>

// 6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.
void main()
{
    float suma = 0, promedio = 0, notas = 0, cantNotas = 0;
    char validacion;

    do
    {
        printf("Ingrese la nota deseada: ");
        scanf("%f", &notas);
        cantNotas++;
        suma += notas;
        printf("Quiere seguir agregando Notas? S o N");
        scanf(" %c", &validacion);
    } while (validacion == 'S' || validacion == 's');
    promedio = suma / cantNotas;
    printf("Su promedio es %.2f", promedio);
}