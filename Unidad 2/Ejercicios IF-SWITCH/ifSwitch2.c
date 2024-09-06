//2- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en 
//pantalla. Informar también si los números son iguales.

#include <stdlib.h>
#include <stdio.h>
void main()
{
    int num1,num2;
    printf("ingrese 2 numeros");
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
    {
        printf("el %d es mayor a %d", num1, num2);
    }
    if (num2>num1)
    {
        printf("el %d es menor %d", num1, num2);
    }
    else if (num2==num1)
    {
        printf("el %d es igual a %d", num2, num1);
    }
    
    
   
    
}