// Una institución educative desea llevar un registro de  sus estudiantes que han participado en
//  actividades extracurriculares. Se tienen los siguientes datos de los estudiantes:
//  ● Cantidad de estudiantes a evaluar
//  ● Legajo de cada estudiante
//  ● Cantidad de actividades extracurriculares en las que ha participado
//  El objetivo es mostrar cuántos estudiantes han participado en más de cinco actividades
//  extracurriculares. Además, se desea conocer el legajo del estudiante que ha participado en la
//  mayor cantidad de actividades extracurriculares.
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cantEstudiantes, legajo, cantActividadesExtra=0, max=0, legajoMax=0;

    printf("Cuantos estudiantes desea ingresar?: ");
    scanf("%d", &cantEstudiantes);
    for (int i = 1; i <= cantEstudiantes; i++)
    {
        cantActividadesExtra=0;
        legajo=0;
        printf("Ingrese el legajo del estudiante: ");
        scanf("%d", &legajo);
        printf("Ingrese cantidad de actividades extras del alumno: ");
        scanf("%d", &cantActividadesExtra);
        if (cantActividadesExtra == 1)
        {
           max=cantActividadesExtra;   
        }
        if (cantActividadesExtra > max)
        {
            max=cantActividadesExtra;
            legajoMax=legajo;
        }
    }
     printf("la cantidad de actividades maximas es %d\n", max);
        printf("el legajo de la persona que mas hizo es %d\n", legajoMax);
}