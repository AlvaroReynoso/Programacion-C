#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 12. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son
// iguales.
void main()
{
    char nombreUno[10], nombreDos[10];
    printf("Ingrese nombre 1: ");
    scanf("%s", nombreUno);
    printf("Ingrese nombre 2: ");
    scanf("%s", nombreDos);
    if (strcmp(nombreUno, nombreDos) == 0)
    {
        printf("Es igual");
    }
    else
    {
        if (strcmp(nombreUno, nombreDos) ==-1)
        {
            printf("Es menor");
        }
        else
        {
            printf("Es mayor");
        }
    }
}