#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 11. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes
// (número de letras).
void main()
{
    char cadenas[3][50];
    for (int i = 0; i <= 2; i++)
    {
        printf("Ingrese su cadena %d: ", i + 1);
        scanf("%s", cadenas[i]);
    }
    for (int i = 0; i <= 2; i++)
    {
        printf("La cadena %s tiene una longitud de: %d\n", cadenas[i], strlen(cadenas[i]));
    }
}