//4- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.
#include <stdlib.h>
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("ingrese 3 numeros");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("a:%d es el mayor",a);
    }
     if (b>a && b>c)
    {
         printf("b:%d es el mayor",b);
    }
    if (c>a && c>b)
    {
        printf("c:%d es el mayor",c);
    }
    
    
}