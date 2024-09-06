#include <stdio.h>
#include <stdlib.h>
//Imprimir el valor ASCII de un caracter
void main()
{
char caracter;
printf("Ingresa un caracter: ");
caracter = getchar();
printf("El caracter ingresado es: %d\n", caracter);
system("pause");
}