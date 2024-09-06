#include <stdio.h>  //me permite hacer uso de la funcion printf y scanf
//#include <stdlib.h> //me permite hacer la llamada a la función system

// 2- Ingresar tres valores, sumarlos e imprimir esa suma.

int main()
{
    int valor1, valor2;
    float valor3, resultado;
    valor1 = 7;
    valor2 = 5;
    valor3 = 3.4;
    resultado = valor1 + valor2 + valor3;
    printf("la suma de %d, %d y %.2f da = %.2f\n", valor1, valor2, valor3, resultado);
 
    system("pause");
}