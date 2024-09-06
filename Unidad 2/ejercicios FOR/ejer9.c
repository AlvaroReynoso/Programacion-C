#include <stdio.h>
void main()
//9. Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.
{
    int resultado;
    for (int i = 1; i <10; i++)
    {
        printf("tabla del numero %d\n",i);
        for (int j = 0; j <10; j++)
        {
            resultado=i*j;
            printf("el resultado de multiplicar %d * %d es %d\n",i,j,resultado);
        }
        
    }
    
}