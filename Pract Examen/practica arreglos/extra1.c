#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 1. Realice un pseudocódigo que permita sumar los elementos de dos arreglos y guarde el resultado en otro arreglo. Deberá imprimir
// el arreglo resultante, el tamaño del arreglo será introducido por el usuario, se debe comprobar que el tamaño del arreglo sea válido,
// es decir, no permitir valores negativos y que sea mayor que 2.
void main()
{
    int num1;
    do
    {
      printf("Ingrese valor de los arreglos: ");
    scanf("%d", &num1);
    if (num1<=2)
    {
        printf("Ingrese un num correcto mayor a 2");
    }
    
    } while (num1<=2);
    
  
    int arrayUno[num1];
    int arrayDos[num1];
    int arrayTotal[num1];

    for (int i = 0; i < num1; i++)
    {
       
            printf("Ingrese valor %d del 1er array: ", i + 1);
            scanf("%d", &arrayUno[i]);

    }
    for (int j = 0; j < num1; j++)
    {
    
            printf("Ingrese valor %d del 2do array: ", j + 1);
            scanf("%d", &arrayDos[j]);
    }
    for (int k = 0; k < num1; k++)
    {
            arrayTotal[k] = arrayUno[k] + arrayDos[k];
            printf("La suma de %d y %d es : %d", arrayUno[k], arrayDos[k], arrayTotal[k]);
    }
    
}