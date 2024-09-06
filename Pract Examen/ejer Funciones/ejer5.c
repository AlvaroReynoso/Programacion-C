#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 5. Realizar un programa que le pida al usuario que ingrese una lista de 10 alumnos y los
// resultados del examen final. Luego el programa llamará a una función que calcula el promedio
// de notas, a otra función que calcula la mayor nota, y otra que calcula la menor nota. Luego el
// sistema informará estos 3 valores al usuario
float calcularPromedio(float notas[]);
void maximoYminimo(float notas[]);
void main()
{
    float promedio;
    float notas[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    promedio = calcularPromedio(notas);
    printf("El promedio es: %.2f\n",promedio);
    maximoYminimo(notas);
}
float calcularPromedio(float notas[])
{
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += notas[i];
    }
    return suma / 5;
}
void maximoYminimo(float notas[])
{
    float max = 0, min;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            max = notas[i];
            min = notas[i];
        }
        else
        {
            if (notas[i] > max)
            {
                max = notas[i];
            }
            if (notas[i] < min)
            {
                min = notas[i];
            }
        }
    }
    printf("La nota maxima es: %.2f\n", max);
    printf("La nota minima es: %.2f\n", min);
}