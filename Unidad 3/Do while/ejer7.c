#include <stdio.h>
#include <stdlib.h>
// 7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de 
// datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman. 
void main()
{
    float numeros=0; 
    int cantNumeros=0;
    do
    {
       printf("Ingrese los numeros reales que desee.\nIngrese 0 si no quiere ingresar mas: ");
       scanf("%f",&numeros);
       cantNumeros++;
    //    if (numeros==0)
    //    {                    <------------------Asi tambien se puede
    //     cantNumeros--;
    //    }
       
    } while (numeros!=0);
    cantNumeros--;
    printf("La cantidad de numeros ingresados son: %d ",cantNumeros);
}