#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ingrese un nombre y lo muestre en pantalla n veces
void main()
{
  char nombre[5][40];
  for (int i = 0; i <=4; i++)
  {
    printf("Ingrese el nombre %d: \n",i+1);
    gets(nombre[i]);
  }
  for ( int i = 0; i <5; i++)
  {
    printf("Los nombres son %s \n",nombre[i]);
  }
}
