#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 4. Escriba un algoritmo donde se le pida al usuario que ingrese una lista de 30 alumnos y los resultados del parcial. Al finalizar la carga mostrar los alumnos que aprobaron y los que no aprobaron.
void main()
{
  char lista[4][20];
  float notaAlumno[4];
    for (int i = 0; i <4 ; i++)
    {
         printf("Ingrese nombre del alumno %d: ",i+1);
         scanf("%s",lista[i]);
         printf("Ingrese nota del alumno %d: ",i+1);
         scanf("%f",&notaAlumno[i]);
    }
    for (int i = 0; i <4; i++)
    {
        if (notaAlumno[i]<4)
        {
            printf("El alumno que reprobo es: %s y tiene una nota de %.2f\n",lista[i],notaAlumno[i]);
        }
        else
        {
            printf("El alumno que aprobo es: %s y tiene una nota de %.2f\n",lista[i],notaAlumno[i]);
        }
        
    }
    
}