#include <stdio.h>
#include <stdlib.h>
// 4. Escribir un algoritmo que permita ingresar 10 valores numéricos en un arreglo y que como resultado devuelva el mayor de todos
// los valores ingresados.
void main()
{
    int matriz[10],max;
    for (int i = 0; i <=9; i++)                        
    {
       printf("ingrese el numero %d: ",i+1);
       scanf("%d",&matriz[i]);
       if (i==0)
       {
        max=matriz[i];
       }
       else
       {
        if (matriz[i]>max)
        {
            max=matriz[i]; 
        }
       }  
    }
    printf("El numero mayor es: %d",max);
}
