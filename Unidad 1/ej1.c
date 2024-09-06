#include <stdio.h>  //me permite hacer uso de la funcion printf y scanf
#include <stdlib.h> //me permite hacer la llamada a la función system

// 1- Ingresar dos valores enteros, sumarlos e imprimir esta suma.
void main()
{
    int a = 20;
    int b = 5;
    int resultado;
    resultado = a + b;
    printf("el valor es %d\n", resultado);
    system("pause");
}