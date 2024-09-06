// 3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo
//    printf("ingrese 2 numeros");
//   printf("ingrese 2 numeros");
//   scanf("%d %d",&num1,&num2);
#include <stdlib.h>
#include <stdio.h>
void main()
{
    int num;
    printf("ingrese su numero");
    scanf("%d",&num);
    if (num > 0)
    {
        printf("%d es positivo",num);
    }
    else if (num < 0)
    {
        printf("%d es negativo",num);
    }
    else
    {
        printf("%d es nulo",num);
    }
}
