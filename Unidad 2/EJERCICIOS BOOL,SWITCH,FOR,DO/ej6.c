#include <stdio.h>
#include <stdlib.h>
void main()
// 2. Ingresar los lados de un triángulo e informar si es equilátero, isósceles o escaleno.

{
    float lado1, lado2, lado3;
    printf("ingrese lado 1\n");
    scanf("%f", &lado1);
    printf("ingrese lado 2\n");
    scanf("%f", &lado2);
    printf("ingrese lado 3\n");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("el triangulo es equilatero");
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
    {
        printf("el triangulo es isoceles");
    }
    else
    {
        printf("tu triangulo es escaleno");
    }
}
