#include <stdio.h>
#include <stdlib.h>
// 3. Desarrollar un algoritmo que permita ingresar 5 datos numéricos en un arreglo y que luego los sume a todos y muestre el resultado
// en pantalla.
void main()
{
    int matriz[5],acum=0;
    for (int i = 0; i <=4; i++)                        
    {
       printf("ingrese el numero %d: ",i+1);
       scanf("%d",&matriz[i]);
        acum+=matriz[i];
    }
    printf("El resultado de la suma es: %d",acum);
      
}