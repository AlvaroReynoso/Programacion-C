#include <stdio.h>
#include <stdlib.h>
// 1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
// forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante. 
void main()
{
    // int matriz[5];
    // matriz[0]=5;
    // matriz[1]=2;
    // matriz[2]=1;
    // matriz[3]=12;
    // matriz[4]=17;
    int matriz[]={2,3,4,5,6};
    int i,j;
    for ( i = 0; i <=4; i++)                         //Otra forma de asignacion
    {
      printf("el indice %d contiene el valor %d\n",i+1,matriz[i]);
    }
    for ( j = 4; j >=0; j--)
    {
      printf("el indice %d contiene el valor %d\n",j+1,matriz[j]);
    }
    
    

}