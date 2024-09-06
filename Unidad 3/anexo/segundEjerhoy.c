#include <stdio.h>
#include <stdlib.h>

// Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.
void main()
{
    float notas, suma = 0, promedio, totalNotas;
    char bandera = 'N';
    totalNotas = 0;
    do
    {

        printf("ingrese las notas que desee que desee");

        scanf("%f", &notas);

        suma += notas;

        totalNotas += notas;

        printf("Quiere seguir ingresando notas? S o N");

        scanf(" %c", &bandera);
        
    } while (bandera == 'S');

    promedio = totalNotas / notas;

    printf("la suma de las notas son %2f", suma);

    printf("El promedio es de  %2f", promedio);
}