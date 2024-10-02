//Ejer 1: Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero1, resultado;
    printf("ingrese un numero entero: ");
    scanf("%d", &numero1);
    for (int i = 0; i < 10; i++)
    {
        resultado = numero1 * i;
        printf("el numero %d multiplicado por %d es: %d\n", i, numero1, resultado);
    }
}