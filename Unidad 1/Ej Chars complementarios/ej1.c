// 3-	Pide al usuario que ingrese un carácter en mayúscula y luego imprime su equivalente en minúscula.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char x;
    int suma;
    printf("ingrese un caracter en mayus");
    scanf(" %c", &x);
    suma = x + 32;
    printf("el caracter %c ahora es %c",x,suma);
    
}