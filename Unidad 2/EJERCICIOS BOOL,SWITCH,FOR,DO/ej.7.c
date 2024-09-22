//Ingrese un numero y que muestre el facotrial del mismo
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int factorial, num, i;
    printf("ingrese el numero deseado\n");
    scanf("%d", &num);
    factorial = 1;
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("el factorial de %i es %i\n", num, factorial);
    system("pause");
}