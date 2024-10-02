// genere un programa que imprima un numero n de lineas, donde n es un numero ingresado por el usuario, y en cada linea se imprima el caracter '@' si la linea es par, y el caracter '#' si la linea es impar.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("ingrese un numero entero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("@\n");
        }
        else
        {
            printf("#\n");
        }
    }
}
