#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 4. Crear una función que calcule el cubo de un número real (float). El resultado deberá
// ser otro número real.
float cuboNumero(float num);
void main()
{
    float valor, total;
    printf("Ingrese un valor: ");
    scanf("%f", &valor);
    total = cuboNumero(valor);
    printf("El resultado es: %.2f", total);
}
float cuboNumero(float num)
{
    float resultado = pow(num, 3);
    return resultado;
}