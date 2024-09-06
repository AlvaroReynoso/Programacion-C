#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 8. Crear una función que reciba un número cualquiera y que devuelva como resultado la
// suma de sus dígitos. 
float suma(float valor);
void main()
{
   float resultado,valor; 
    resultado=suma(valor);
    printf("El resultado es: %.2f",resultado);
}
float suma(float valor)
{
    int resultado;
    printf("Ingrese un valor: ");
    scanf("%f",&valor);
    resultado=valor+valor;
   
    return resultado;
}