#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 6. Realice un algoritmo que lea N elementos y que imprima el número que se repite más veces dentro del arreglo
void main()
{
    int numArray;
    int numeroRepetido=0;
    printf("Cuantos numeros desea analizar?: ");
    scanf("%d",&numArray);
    int array[numArray];
    for (int i = 0; i < numArray; i++)
    {
        printf("Ingrese el numero %d: ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i <numArray; i++)
    {
        for (int  j =i+1; j <numArray; j++)
        {
            if (array[i]==array[j])
        }
        
        if (array[i]==array[i])
        {
         numeroRepetido=array[i];
        }
    }
    
      printf("El numero mas repetido es: %d",numeroRepetido); 
}