#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 3. Realizar un programa que le pida al usuario ingresar los 3 lados de un triángulo e informar si
// es equilátero, isósceles o escaleno. Ésto debe hacerse llamando a un subproceso que reciba
// los lados como parámetros de entrada y muestre por pantalla el tipo de triángulo (ejemplo “El
// triángulo ingresado es un escaleno”).
void calculoTriangulo(float lado1, float lado2, float lado3);
void main()
{
    float lado1, lado2, lado3;
    printf("Ingrese lado1: ");
    scanf("%f", &lado1);
    printf("Ingrese lado2: ");
    scanf("%f", &lado2);
    printf("Ingrese lado3: ");
    scanf("%f", &lado3);
    calculoTriangulo(lado1, lado2, lado3);
}
void calculoTriangulo(float lado1, float lado2, float lado3)
{
    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("Equilatero");
    }
    else
    {
        if (lado1 != lado2 && lado2 != lado3)
        {
            printf("Escaleno");
        }
        else
        {
            printf("Isoceles");
        }
    }
}