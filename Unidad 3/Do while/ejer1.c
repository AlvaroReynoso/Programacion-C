#include <stdio.h>
#include <stdlib.h>
// 1. Imprimir en la consola los números del 1 al 100.
void main()
{
    int numero;
    numero = 0;
    do
    {
        numero++;
        printf("%d", numero);
    } while (numero < 100);
}