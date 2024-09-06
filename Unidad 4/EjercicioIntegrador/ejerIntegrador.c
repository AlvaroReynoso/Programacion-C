#include <stdio.h>
#include <stdlib.h>
// Deseamos realizar un programa que gestione las notas de una materia de N alumnos para las 3
// comisiones. Suponer que todas las comisiones tienen la misma cantidad N de alumnos que
// debe solicitarse por teclado antes del menú.
// El programa debe mostrar un menú con las siguientes opciones:
// 1. Cargar notas alumnos por comisión
// 2. Promedio por Comisión
// 3. Promedio de la materia
// 4. Cantidad de aplazos en la materia
// 5. Cantidad de regularizados en la materia
// 6. Cantidad de aprobados en la materia
// 7. Salir
void main()
{
    int cantAlumnos, j, k, l, opcion;
    float promedioAlumnos = 0, promedioComision = 0, totalNotaComision1 = 0, totalNotaComision2 = 0, totalNotaComision3 = 0, promedio1 = 0, promedio2 = 0, promedio3 = 0, promedioMateria = 0, cantDesaprobados = 0, cantRegular = 0, cantAprobados = 0;
    float notasComision1[5];
    float notasComision2[5];
    float notasComision3[5];
    char Salir = 'N';

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantAlumnos);
    do
    {
        if (cantAlumnos <= 0)
        {
            printf("Ingrese una numero correcto: ");
            scanf("%d", &cantAlumnos);
        }

    } while (cantAlumnos <= 0);
    for (j = 0; j < cantAlumnos; j++)
    {
        do
        {
            printf("Ingrese la nota del alumno %d de la comision 1: ", j + 1);
            scanf("%f", &notasComision1[j]);
            if (notasComision1[j] <= 0 || notasComision1[j] > 10)
            {
                printf("Nota incorrecta,vuelva a ingresar un nota correcta\n");
            }
            else
            {
                totalNotaComision1 += notasComision1[j];
            }
            if (notasComision1[j] < 4)
            {
                cantDesaprobados++;
            }
            if (notasComision1[j] >= 4 && notasComision1[j] < 6)
            {
                cantRegular++;
            }
            if (notasComision1[j] >= 6 && notasComision1[j] <= 10)
            {
                cantAprobados++;
            }

        } while (notasComision1[j] <= 0 || notasComision1[j] > 10);
    }

    for (k = 0; k < cantAlumnos; k++)
    {
        do
        {
            printf("Ingrese la nota del alumno %d de la comision 2: ", k + 1);
            scanf("%f", &notasComision2[k]);
            if (notasComision2[k] <= 0 || notasComision2[k] > 10)
            {
                printf("Nota incorrecta,vuelva a ingresar un nota correcta\n");
            }
            else
            {
                totalNotaComision2 += notasComision2[k];
            }
            if (notasComision1[k] < 4)
            {
                cantDesaprobados++;
            }
            if (notasComision1[k] >= 4 && notasComision1[k] < 6)
            {
                cantRegular++;
            }
            if (notasComision1[k] >= 6 && notasComision1[k] <= 10)
            {
                cantAprobados++;
            }
        } while (notasComision1[k] <= 0 && notasComision1[k] > 10);
    }

    for (l = 0; l < cantAlumnos; l++)
    {
        do
        {
            printf("Ingrese la nota del alumno %d de la comision 3: ", l + 1);
            scanf("%f", &notasComision3[l]);
            if (notasComision3[l] <= 0 && notasComision3[l] > 10)
            {
                printf("Nota incorrecta,vuelva a ingresar un nota correcta\n");
            }
            else
            {
                totalNotaComision3 += notasComision3[l];
            }
            if (notasComision1[l] < 4)
            {
                cantDesaprobados++;
            }
            if (notasComision1[l] >= 4 && notasComision1[l] < 6)
            {
                cantRegular++;
            }
            if (notasComision1[l] >= 6 && notasComision1[l] <= 10)
            {
                cantAprobados++;
            }
        } while (notasComision1[l] <= 0 && notasComision1[l] > 10);
    }
    do
    {
    printf("1. Cargar notas alumnos por comision\n2. Promedio por Comision\n3. Promedio de la materia\n4. Cantidad de aplazos en la materia\n5. Cantidad de regularizados en la materia\n6. Cantidad de aprobados en la materia.\n7. Salir\nIngrese la opcion: ");
    scanf("%d", &opcion);

if (opcion == 2)
{
    promedio1 = totalNotaComision1 / cantAlumnos;
    promedio2 = totalNotaComision2 / cantAlumnos;
    promedio3 = totalNotaComision3 / cantAlumnos;
    printf("El promedio de la comision 1 es: %.2f\n ", promedio1);
    printf("El promedio de la comision 2 es: %.2f\n ", promedio2);
    printf("El promedio de la comision 3 es: %.2f\n ", promedio3);
    system("pause");
}
if (opcion == 3)
{
    promedioMateria = (totalNotaComision1 + totalNotaComision2 + totalNotaComision3) / (cantAlumnos * 3);
    printf("El promedio de la materia es: %.2f\n ", promedioMateria);
    system("pause");
}
if (opcion == 4)
{
    printf("La cantidad de Aplazados son: %.2f\n", cantDesaprobados);
    system("pause");
}
if (opcion == 5)
{
    printf("La cantidad de regularizados son: %.2f\n", cantRegular);
    system("pause");
}
if (opcion == 6)
{
    printf("La cantidad de Aprobados son: %.2f\n", cantAprobados);
    system("pause");
}
} while (opcion!=7);
}
