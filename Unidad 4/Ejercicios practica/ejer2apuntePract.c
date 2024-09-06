#include <stdio.h>
#include <stdlib.h>
// 2. Escribir un algoritmo que permita al usuario ingresar 5 números y luego imprimirlos en pantalla.
void main()
{
    int matriz[5];
    for (int i = 0; i <=4; i++)                        
    {
       printf("ingrese el numero %d: ",i+1);
       scanf("%d",&matriz[i]);
    }
    for (int i = 0; i <5; i++)
    {
         printf("el numero ingresado en la posicion %d es: %d\n",i,matriz[i]);   
    }
    
}