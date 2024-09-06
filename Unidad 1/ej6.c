#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 6- Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
// valor ingresado, imprimir los resultados

void main()
{
    float valor1, valor2, suma, producto, resta;
    valor1 = 4;
    valor2 = 3;
    suma = valor1 + valor2;
    producto = valor1 * valor2;
    resta = valor1 - valor2;
    printf("la suma de los numeros es %.2f\n el producto es %.2f\n la resta es %.2f\n  ", suma, producto, resta);
    system("pause");
}