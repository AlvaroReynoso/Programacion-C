#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 5. Crear una función llamada “signo”, que reciba un número real, y devuelva un número
//  entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.
void signo(int num);
void main()
{
    int numero, result;
    printf("Ingrese un valor: ");
    scanf("%d", &numero);
    signo(numero);
}
void signo(int num)
{
    if (num < 0)
    {
        printf("-1");
    }
    else
    {
        if (num > 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}