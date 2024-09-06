#include <stdio.h>
void main()
{
    int edadAlumno, cantidadAlumnosMayores;
    cantidadAlumnosMayores = 0;
    for (int i = 1; i <= 5; i++)

    {
        printf("ingrese edad alumno %d", i);
        scanf("%d", &edadAlumno);
        if (edadAlumno > 21)
        {
            cantidadAlumnosMayores = cantidadAlumnosMayores + 1;
        }
    }
    printf("la cantidad de alumnos mayores son: %d", cantidadAlumnosMayores);
}