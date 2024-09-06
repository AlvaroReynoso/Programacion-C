//Ingrese la nota de los alumnos x y hacer el promedio total
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int cantAlum;
    float nota, prom, suma;
    cantAlum = 5;
    suma = 0;
    for (int i = 1 ;i <= cantAlum; i++)
    {
        printf("ingresar la nota del alumno %d", i);
        scanf("%f", &nota);
        suma = suma + nota;
    }
    prom = suma / cantAlum;
    printf("el promedio de los %d alumnos es: %.2f ", cantAlum, prom);
} 