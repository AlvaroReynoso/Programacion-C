#include <stdio.h>
#include <stdlib.h>
// 10. Ingresar los resultados del parcial para los alumnos de un curso y al finalizar informar
// el promedio, la cantidad de desaprobados y la cantidad de aprobados. Nota: Se
// aprueba con 6 y se debe validar que la nota ingresada sea un número decimal entre 1
// y 10.
void main()
{
    float notas, promedio, totalNotas;
    int desaprobados = 0, aprobados = 0, contadorNotas = 0;
    char finalizar = 'N';
    do
    {
        printf("Ingrese notas de los parciales,para finalizar presione N: ");
        scanf("%f", &notas);
        totalNotas += notas;
        contadorNotas++;
        if (notas < 6)
        {
            desaprobados++;
        }
        if (notas >= 6)
        {
            aprobados++;
        }
        printf("Quiere seguir ingresando notas ,S o N? ");
        scanf(" %c", &finalizar);
    } while (finalizar != 'N' && finalizar != 'n');
    promedio = totalNotas / contadorNotas;
    printf("El promedio de las notas son: %.2f\n", promedio);
    printf("Los alumnos desaprobados son: %d\n", desaprobados);
    printf("Los alumnos aprobados son: %d\n", aprobados);
}