// Ejer 7: Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones. Mostrar el promedio por alumno y el promedio general
#include <stdio.h>
void main()
{
    int alumnos = 5, cantNota = 3;
    float calificaciones, nota, promedioAlumno, promedioGeneral, calificacionesAlumnos = 0;
    for (int i = 1; i <= alumnos; i++)
    {
        calificaciones = 0;
        for (int j = 1; j <= cantNota; j++)
        {

            printf("ingrese la nota %d del alumno %d: ", j, i);
            scanf("%f", &nota);
            calificaciones = calificaciones + nota;
        }
        calificacionesAlumnos += calificaciones;
        promedioAlumno = calificaciones / cantNota;
        printf("el promedio del alumno %d es %.2f:\n", i, promedioAlumno);
    }
    promedioGeneral = calificacionesAlumnos / (cantNota * alumnos);
    printf("el promedio general de todos los alumnos es: %.2f\n", promedioGeneral);
}