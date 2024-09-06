#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 6. Crear una función que devuelva la primera letra de una cadena de texto. 
char letra(char palabra[]);
char main()
{
char palabra[10];
char primeraletra=letra(palabra);
printf("Su letra es: %c",primeraletra);
}

char letra(char palabra[])
{
    printf("Ingrese la palabra que desee: ");
    scanf("%s",palabra);
       if (palabra)
       {
        return palabra[0];
       }
}