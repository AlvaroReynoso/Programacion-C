// Ejer 3: Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
#include <stdio.h>
#include <stdlib.h>
void main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("@@\n");
        }
        else
        {
            printf("@\n");
        }
    }
}