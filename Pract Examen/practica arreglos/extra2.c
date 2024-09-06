#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 2. Escriba un algoritmo que lea un arreglo de N x 5 indicando que una empresa tiene N vendedores cada uno de los cuales vende 5
// productos. El arreglo almacena los ingresos obtenidos por cada vendedor en cada producto, imprimir el total de cada vendedor y
// obtener los ingresos totales de la tienda.
void main()
{
    int numeroArray;
    printf("Ingrese numero de vendedores: ");
    scanf("%d", &numeroArray);
    float array[numeroArray][5];
    float acumTotal = 0;
    float acumGananciaxVendedor[numeroArray];
    float acumXvendedor = 0;
    for (int i = 0; i < numeroArray; i++)
    {
        acumGananciaxVendedor[i] = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("Ingrese venta %d del vendedor %d: ", j + 1, i + 1);
            scanf("%f", &array[i][j]);
            acumGananciaxVendedor[i] += array[i][j];
            acumTotal += array[i][j];
        }
    }

    for (int i = 0; i < numeroArray; i++)
    {

        printf("El vendedor %d hizo : $%.2f", i + 1, acumGananciaxVendedor[i]);
    }

    printf("El total vendido fue: %.2f", acumTotal);
}