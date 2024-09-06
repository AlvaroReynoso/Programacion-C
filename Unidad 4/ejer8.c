#include <stdio.h>
#include <stdlib.h>
//8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
// 10 números en pantalla mediante un solo array. 
void main()
{
    int i,j,k,numerosUno[5],numeros2[5],totalNum[10];

    for ( i = 0; i < 5; i++)
    {
        printf("Ingrese 5 numeros que desee: ");
        scanf("%d",&numerosUno[i]);
    }
    for ( j = 0; j < 5; j++)
    {
        printf("Ingrese 5 numeros que desee: ");
        scanf("%d",&numeros2[j]);
    }
    for (k = 0; k <5; k++)
    {
        totalNum[k]=numerosUno[k];
    }
    for (int l = 0; l < 5; l++)
    {
        totalNum[l+5]=numeros2[l];
    }
    for (int m = 0; m < 10; m++)
    {
       printf("Los numeros son: %d",totalNum[m]);
    }
    
}