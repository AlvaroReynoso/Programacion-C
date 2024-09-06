#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 7. Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
// número primo o 0 en caso contrario.
int esPrimo(int num);
void main()
{
    int numero, total;
    printf("Ingresar un numero para saber si es primo o no: \n");
    scanf("%d", &numero);
    total = esPrimo(numero);
    if (total == 1)
    {
        printf("Es primo\n");
    }
    else
    {
        printf("No es primo\n");
    }
}
int esPrimo(int num)
{
    int resultado = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            resultado = 1;
        }
        else
        {
            resultado = 0;
        }
        return resultado;
    }
}
