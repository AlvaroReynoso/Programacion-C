#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 8. Realizar un programa que permita almacenar números reales en una matriz de orden 4×3, cuatro filas y tres columnas. Además,
// calcular e imprimir la suma de cada uno de los números ingresados.
void main()
{
    float matriz[4][3];
    float suma=0;
    for (int  i = 0; i < 4; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            printf("Ingrese valor de la fila %d de la columna %d: ",i+1,j+1);
            scanf("%f",&matriz[i][j]);
            suma+=matriz[i][j];
       } 
    }
    printf("La suma total de todos los valores es: %.2f",suma);
}