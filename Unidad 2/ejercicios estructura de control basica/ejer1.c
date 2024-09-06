//Ingrese cantidad de alumnos que superan los 21 años y me muestre el total de los mismos 
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int edadAlumno, cantidadMayores, i;
    cantidadMayores = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("ingrese edad del alumno %d\n", i);
        scanf("%d", &edadAlumno);
        if (edadAlumno > 21)
        {
            cantidadMayores++;
        }
    }
    printf("la cantidad de alumnos que superan los 21 son %d\n", cantidadMayores);
    system("pause");
}