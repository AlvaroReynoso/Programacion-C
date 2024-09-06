#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int busquedaDicotomica(int array[5],int datoAbuscar);
void main()
{
    int posicion;
    int numeroAbuscar;
    int array[]={1,2,3,4,5};
    printf("Ingrese numero a buscar: ");
    scanf("%d",&numeroAbuscar);
    posicion=busquedaDicotomica(array,numeroAbuscar);
    if (posicion!=-1)
    {
        printf("Se encontro en %d",posicion);
    }
    else
    {
        printf("No se encontro");
    }
    
}

int busquedaDicotomica(int array[5],int datoAbuscar)
{
    int encontrado=0;
    int pos=-1;
    int superior=4,inferior=0,centro;
    do
    {
        centro=(superior+inferior)/2;
        if (array[centro]==datoAbuscar)
        {
            encontrado=1;
            pos=centro;
        }
        else
        {
            if (array[centro]<datoAbuscar)
            {
                inferior=centro+1;
                
                
            }
            else
            {
                superior=centro-1;
            }
        }
    } while (encontrado==0 && inferior<=superior);
    
    return pos;
}
