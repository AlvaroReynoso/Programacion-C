#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 9. Escriba un programa que lea 5 números por teclado, los copie a otro array
// multiplicados por 2 y muestre el segundo array
void main()
{
    int numeros, i;
    printf("Ingrese la cantidad de numeros que desee: ");
    scanf("%d", &numeros);
    int array[numeros];
    for (i = 0; i < numeros; i++)
    {
        printf("Ingrese el %d valor: ", i + 1);
        scanf("%d", &array[i]);
    }
    int array2[numeros];
    for (int j = 0; j < numeros; j++)
    {
        array2[j] = array[j] * 2;
        printf("El valor ahora es: %d\n", array2[j]);
    }
}