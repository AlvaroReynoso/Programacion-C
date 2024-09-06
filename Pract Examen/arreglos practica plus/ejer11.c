#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 1. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes 
// (número de letras).  
void main()
{
    char nombre[10],apellido[10],dni[10];
    printf("Ingrese cadena 1: ");
    scanf("%s",nombre);
    printf("Ingrese cadena 2: ");
    scanf("%s",apellido);
    printf("Ingrese cadena 3: ");
    scanf("%s",dni);

    printf("%d\n",strlen(nombre));
    printf("%d\n",strlen(apellido));
    printf("%d\n",strlen(dni));

}