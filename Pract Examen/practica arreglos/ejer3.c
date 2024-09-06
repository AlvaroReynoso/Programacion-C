#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//3. Desarrollar un algoritmo que permita ingresar 5 datos numéricos en un arreglo y que luego los sume a todos y muestre el resultado
//en pantalla.
void main()
{
    float array[5];
    float suma=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor %d: ",i+1);
        scanf("%f",&array[i]);
        suma+=array[i];
    }
    printf("La suma es: %.2f",suma);
    
}