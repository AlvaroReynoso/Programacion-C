// Ingresar por pantalla un número e informar si es un número par o impar (usar el
// operador módulo “%”, por ejemplo, el resultado de 100%2 es el resto de la división
// 100/2).
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,resto;
    printf("ingrese un numero\n");
    scanf("%d", &num);
    //num = num % 2; esto tambien se puede pero es mejor la otra opcion
    resto=num%2;
     if (resto==0)
     {
        printf("su numero %d es par\n",num);
     }
     else
     {
         printf("su numero %d es impar\n",num);

     }
}