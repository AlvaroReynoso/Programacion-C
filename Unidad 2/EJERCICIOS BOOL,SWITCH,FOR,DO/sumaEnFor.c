#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,nro,acum;
    acum=0; //PRINCIPAL DEFINIR COMO 0 ALGO Q SE VA A CONTAR DESDE 0
    
    for (i=1;i<=5;i++)
    {
        printf("ingrese un numero",nro);
        scanf("%d",&nro);
         acum=acum+nro;
    }
   
    printf("su suma total de los nros es %d",acum);
    
}