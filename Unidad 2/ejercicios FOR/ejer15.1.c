#include <stdio.h>
#include <stdlib.h>
// 15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
// Mostrar el promedio por alumno y el promedio general.
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
            printf("Ingrese calificacion %f del alumno %d\n", j, i);
            scanf("%f", &calificacion);
            calificacion += nota;
            calificacionTotal += nota;
        }
        promedio = calificacion / 3;
    }
    promedioGeneral = calificacionTotal / (nota*alumnos);
    printf("el promedio general es %.2f", promedioGeneral);
}