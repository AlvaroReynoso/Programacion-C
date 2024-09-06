#include <stdio.h>
#include <stdlib.h>
// 9. Escriba un programa que lea 5 números por teclado, los copie a otro array 
// multiplicados por 2 y muestre el segundo array.  
void main()
{
    int cantNumeros;
    float multiplicacion;
    printf("Ingrese cantidad de numero total");
    scanf("%d",&cantNumeros);
    int primerArray[cantNumeros];
    for (int i = 0; i <=cantNumeros-1; i++)
    {
        printf("Ingrese el %d numero: ",i+1);
        scanf("%d",&primerArray[i]);
    }
    int segundoArray[cantNumeros];
    for (int i = 0; i <=cantNumeros-1; i++)
    {
        segundoArray[i]=primerArray[i]*2;
        printf("El nuevo numero es: %d\n",segundoArray[i]);
    }
    
    
}