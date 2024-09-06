#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
  // char hola[]={'H','O','L','A',' ','M','U','N','D','O'};

  // for (int i = 0; i <=9; i++)
  // {
  //   printf("%c",hola[i]);
  // }
  // char nombre[5][40];
  // for (int i = 0; i <=4; i++)
  // {
  //   printf("Ingrese el nombre %d: \n",i+1);
  //   scanf("%s",&nombre);
  // }
  // for ( int i = 0; i <5; i++)
  // {
  //   printf("Los nombres son %s",nombre[i]);
  // }
  char nombre[17];
  printf("Ingrese su nombre: ");
  fgets(nombre, 17,stdin);
  printf("%s",nombre);

  // if (strcpy(nombre, "Alvaro Reynoso")==0)
  // {
  //   printf("Bienvenido  %s\n", nombre);
  // }
  // else
  // {
  //   printf("nombre no compatible con el usuario");
  // }
}