//Ejer 4: escriba un programa que imprima un triangulo de 10 lineas de altura, con el caracter '@' en cada linea
#include <stdio.h>
#include <stdlib.h>
void main()
{
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("@");
        }
        printf("\n");
        
    }
    
}