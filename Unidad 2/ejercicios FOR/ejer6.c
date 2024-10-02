// Ejer 6: Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
// Mostrar el promedio por alumno y el promedio general.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int alumnos;
    float nota, calificacion, promedio, calificacionTotal, promedioGeneral;

    alumnos = 5;
    for (int i = 1; i <= alumnos; i++)
    {
        calificacion = 0;
        for (int j = 1; j <= 3; j++)
        {
            printf("Ingrese calificacion %d del alumno %d\n", j, i);
            scanf("%f", &calificacion);
            calificacion += nota;
            calificacionTotal += nota;
        }
        promedio = calificacion / 3;
    }
    promedioGeneral = calificacionTotal / (nota * alumnos);
    printf("el promedio general es %.2f", promedioGeneral);
}