#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
// Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
// parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
// alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
// mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
// nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
// calculando y por último, el promedio general del curso.
void main()
{
    float notas = 0, promedio = 0, cantNotas = 0, notaAlumno = 0, promedioAlumno = 0;
    int cantParciales = 0, cantAlumnos, AcumNotas = 1;
    printf("Ingrese cant de alumnos\n");
    scanf("%d", &cantAlumnos);
    printf("Ingrese cant de parciales tomados\n");
    scanf("%d", &cantParciales);
    do
    {
        printf("Ingrese nota parcial\n");
        scanf("%f", &notas);
        while (notas <= 0 || notas > 10)
        {
            printf("Ingrese una nota correcta\n");
            scanf("%f", &notas);
        }
        notaAlumno += notas;
        promedioAlumno = notaAlumno / AcumNotas;
        AcumNotas = AcumNotas + 1;
        cantNotas += notas;
        printf("el promedio del alumno es %.2f\n", promedioAlumno);

    } while (AcumNotas <= cantParciales);
    promedio = cantNotas / cantParciales;
    printf("El promedio general es %.2f\n", promedio);
}