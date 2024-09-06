#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 4. Escribir un algoritmo que permita ingresar 10 valores numéricos en un arreglo y que como resultado devuelva el mayor de todos
// los valores ingresados
void main()
{
    int array[10];
    int max=0;
    for (int i = 0; i <10; i++)
    {
        printf("Ingrese el num %d: ",i+1);
        scanf("%d",&array[i]);
        if (i==0)
        {
            max=array[i];
        }
            else
            {
                if (array[i]>max)
                {
                    max=array[i];
                }
                
            }
        
    } 
    printf("El valor max es: %d",max);
}