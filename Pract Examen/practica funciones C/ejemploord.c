#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void orden(int array[5]);
void main()
{
    int ordenamiento[5];
    int array[]={5,3,7,1,2};
    orden(array);
}
void orden(int array[5])
{
    int aux;
    for (int i = 0; i < 5-1; i++)
    {
       for (int j = i+1; j < 5; j++)
       {
            if (array[j]<array[i])
            {
               aux=array[i];
               array[i]=array[j];
               array[j]=aux;
            }    
       }  
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    
}