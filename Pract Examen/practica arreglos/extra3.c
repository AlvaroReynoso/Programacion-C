#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 3. Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingrese 
// los nombres de la misma. Al finalizar la carga mostrar al usuario la lista de invitados. 
void main()
{
    int numInvitados;
    printf("Ingrese num de invitados: ");
    scanf("%d",&numInvitados);
    char array[numInvitados][30];
    for (int i = 0; i <numInvitados; i++)
    {
        printf("Ingrese el nombre del %d invitado: ",i+1);
        scanf("%s",array[i]);
    }
    for (int i = 0; i < numInvitados; i++)
    {
      printf("%d- %s\n",i+1,array[i]);
    }
    
    
}