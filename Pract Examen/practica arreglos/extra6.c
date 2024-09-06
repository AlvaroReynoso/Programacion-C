#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 6. Escriba un algoritmo donde se le pida al usuario que ingrese una matriz cuadrada de dimensión 3. Luego mostrar los elementos de 
// la diagonal principal. 
void main()
{
    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
     for (int j= 0; j< 3;j++)
        {
            printf("Ingrese valor de fila %d y columna %d",i+1,j+1);
            scanf("%d",&array[i][j]);
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
     for (int j= 0; j< 3;j++)
        {
            if (i==j)
            {
                printf("Uno de los valores que estan en la diagonal principal es: %d\n",array[i][j]);
            }
            
            
        }
        
    }

    
}