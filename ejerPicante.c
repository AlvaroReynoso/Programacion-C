#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// array bidimensional de n alumnos y sus notas,funcion max,min,prom... Validar notas entre 1 y 10.
//
void cargaYvalidacionArreglo(char alumnosYnotas[4][2][30]);
void mostrarCarga(char alumnosNotas[4][2][30]);
float maximo(char alumnoYnotas[4][2][30]);
float minimo(char alumnoYnotas[4][2][30]);
float promedio(char alumnosYnotas[4][2][30]);


void main()
{
    char alumnosYnotas[4][2][30];
    float max = 0, min;
    float prom;
    cargaYvalidacionArreglo(alumnosYnotas);
    mostrarCarga(alumnosYnotas);
    max=maximo(alumnosYnotas);
    printf("La nota max es: %.2f",max);
    min=minimo(alumnosYnotas);
    printf("La nota min es: %.2f",min);
    prom=promedio(alumnosYnotas);
    printf("El promedio es: %.2f",prom);

}

void cargaYvalidacionArreglo(char alumnosYnotas[4][2][30])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese nombre del alumno: ");
        scanf("%s", alumnosYnotas[i][0]);
        do
        {
            printf("Ingrese nota de %s: ", alumnosYnotas[i][0]);
            scanf("%s", alumnosYnotas[i][1]);
            if (atof(alumnosYnotas[i][1])<0 || atof(alumnosYnotas[i][1])>10)
            {
                printf("Nota incorrecta\n");
            }
        } while (atof(alumnosYnotas[i][1])<0 || atof(alumnosYnotas[i][1])>10);  
    }
}    
void mostrarCarga(char alumnosNotas[4][2][30])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%s",alumnosNotas[i][j]);
        }
    printf("\n");
    }
}
float maximo(char alumnoYnotas[4][2][30])
{
    float max=0;
    for (int i = 0; i < 4; i++)
    {
       if (i==0)
       {
        max=atof(alumnoYnotas[i][1]);
       }
       else
       {
        if (atof(alumnoYnotas[i][1])>max)
        {
            max=(atof(alumnoYnotas[i][1]));
        }
       } 
    }
    return max;
}
float minimo(char alumnoYnotas[4][2][30])
{
    int min;
    for (int i = 0; i <4; i++)
    {
        if (i==0)
        {
            min=atof(alumnoYnotas[i][1]);
        }
        else
        {
            if (atof(alumnoYnotas[i][1])<min)
            {
                min=atof(alumnoYnotas[i][1]);
            }     
        }
    }
    return min;  
}
float promedio(char alumnosYnotas[4][2][30])
{
    float promedio;
    float sumaTotal=0;
    for (int i = 0; i < 4; i++)
    {
        sumaTotal+=atof(alumnosYnotas[i][1]);
    }
    promedio=sumaTotal/4;
    return promedio;
}
