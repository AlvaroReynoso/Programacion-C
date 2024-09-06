// Escriba un programa que pida ingresar un número y a continuación escriba en la
//consola si el mismo es par o impar.
#include <stdlib.h>
#include <stdio.h>
void main()
{
    int num;
    printf("ingrese un numero");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("el %d es par",num);
    }
    else{
        printf("el %d numero es impar",num);
    }
}