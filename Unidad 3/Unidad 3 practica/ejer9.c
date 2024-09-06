// . Ingresar los resultados del parcial para los alumnos de un curso y al finalizar informar
// el promedio de notas. Se desconoce la cantidad de notas a ingresar. El sistema le
// preguntará al usuario si quiere ingresar otro parcial o si ya terminó.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float notas, promedio = 0, acumNotas = 0;
    int cantNotas = 0;
    char seguir='N';
    do
    {
        printf("Ingresar notas que desee, ingrese N para dejar de ingresar notas: ");
        scanf("%f", &notas);
        cantNotas++;
        acumNotas += notas;
       printf("Si quiere dejar de ingresar notas presione N, de lo contario siga: ");
       scanf(" %c",&seguir);
        
    } while (seguir!='N');
    promedio = acumNotas / cantNotas;
    printf("El promedio de todas las notas son: %.2f\n", promedio);
}