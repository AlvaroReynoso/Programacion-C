#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente 
//la suma de todos los números que no están en la diagonal principal.
void main()
{
  int matriz[3][3],suma=0;
    int i,j;

    for (i = 0; i <=2; i++)
    {
        for (j = 0; j <=2; j++)
    {
        printf("Ingrese num deseado: \n");
        scanf("%d",&matriz[i][j]);
    }
    }
    for (int q = 0; q <=2; q++)
    {
        for (int e = 0; e<=2; e++)
        {
           if (q!=e)
           {
            suma+=matriz[q][e];
           }  
        }    
    }        
    printf("La suma sin la diagonal es: %d",suma);
}