#include <stdio.h>
void main()
{
    int cantAlumnos;
    float notaParcial, promedioParciales, sumaNotas;
    cantAlumnos = 5;
    sumaNotas = 0;
    for (int i = 1; i <= cantAlumnos; i++)
    {
        printf("ingrese la nota del alumno %d", i);
        {
            scanf("%f", &notaParcial);
            sumaNotas = sumaNotas + notaParcial;
        }
    }
        promedioParciales = sumaNotas / cantAlumnos;
        printf("el promedio de notas de los %d alumnos es: %.2f", cantAlumnos, promedioParciales);
}