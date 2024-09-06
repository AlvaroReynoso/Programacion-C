#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola, 
//mostrar cuántas veces se repite el número 5.  
void main()
{
    int array[5],contador=0;
    for (int i = 0; i <=4; i++)
    {
        printf("Ingrese el valor %d: ",i+1);
        scanf("%d",&array[i]);
        if(array[i]==5)
        {
            contador++;
        }
    }
    printf("La cantidad de veces que se repite el numero 5 en total son: %d veces\n",contador);
    
}