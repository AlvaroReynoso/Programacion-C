#include <stdio.h>  //me permite hacer uso de la funcion printf y scanf
#include <stdlib.h> //me permite hacer la llamada a la función system

// 3- Ingresar los lados de un triángulo calcular su perímetro e imprimirlo

void main()
{
    int lado1, lado2, lado3, resultado;
    lado1 = 5, lado2 = 3, lado3 = 10;
    resultado = lado1 + lado2 + lado3;
    printf("el resultado de la suma de los lados del triangulo es %d\n", resultado);
    system("pause");
}