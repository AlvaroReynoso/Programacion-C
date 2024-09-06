#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 11. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes 
// (número de letras).  
void main()
{
    char cadena[3][30];
    for (int i = 0; i <=2; i++)
    {
        printf("Ingrese cadena %d: ",i+1);
        scanf("%s",cadena[i]);
    }
    for (int j = 0; j <=2; j++)
    {
        printf("el total de caracteres de la cadena %s es: %d\n",cadena[j],strlen(cadena[j]));
    }
 
}