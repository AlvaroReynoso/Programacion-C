/*Ingresar los resultados del parcial para los 5 alumnos de un curso y al finalizar
informar el promedio*/
#include <stdio.h>
void main()
{
    int i;
    float notas, cantNotas, promedio;
    for (i = 1; i <= 5; i++)
    {
        printf("ingrese la nota %i: \n",i);
        scanf("%f", &notas);
        cantNotas = cantNotas + notas;
    }
    promedio = cantNotas / 5;
    printf("el promedio es %.2f", promedio);
}