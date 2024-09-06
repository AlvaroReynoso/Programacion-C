#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//Crea una función llamada calcularAreaCuadrado que reciba el lado de un cuadrado
// como parámetro y devuelva el área de ese cuadrado. Luego, desarrolla un programa
// que invoque a esta función y muestre el resultado.
float calcularAreaCuadrado(float lado);     // FLOAT PARA QUE ME DEVUELVA NUMEROS CON COMA

void main()
{
    float ladooo,resultado;
    printf("Ingrese el lado de su cuadrado: ");
    scanf("%f",&ladooo);
    resultado=calcularAreaCuadrado(ladooo);
    printf("El resultado es: %f",resultado);
}

float calcularAreaCuadrado(float lado)  
{
    float area;
    area=lado*lado;
    return area;                   //Retorna area=lado*lado
}