#include <stdio.h>
void main()
{
    int numero,numero2;
    int validacion;
    do
    {
        printf("ingrese un numero");
        scanf("%d",&numero);
 
        if (numero<0 || numero>10)
        {
            printf("ingrese un numero valido entre 1 y 10");
            validacion==0;
        }
        else
        {
            numero2=numero+2;
            printf("el numero %d se transformo el %d",numero,numero2);
        }
    
        
    } while (validacion==0);
}