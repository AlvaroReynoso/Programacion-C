#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
// de 800 pesos, calcular su sueldo e imprimirlo
void main()
{
    float tiempoTra, sueldo;
    const int valorHora = 8000;
    printf("Ingrese el tiempo trabajado ");
    scanf("%f", &tiempoTra);
    sueldo = tiempoTra * valorHora;
    printf("el sueldo es de %.2f \n", sueldo);
    system("pause");
}