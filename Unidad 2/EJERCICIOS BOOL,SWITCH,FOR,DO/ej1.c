//verificar si el numero ingresado es impar o par
#include <stdio.h>
#include <stdlib.h>

void main()
{
  int numero;
  printf("Ingrese numero\n");
  scanf("%d",&numero);
  if (numero % 2==0)
   {
    printf ("el numero %d es par",numero);

   }
   else
   {
    printf("el numero es impar");
   }


  
}