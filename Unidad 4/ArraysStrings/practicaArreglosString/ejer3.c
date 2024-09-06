#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 3. Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingrese
// los nombres de la misma. Al finalizar la carga mostrar al usuario la lista de invitados.
void main()
{
    int cantInv;
    printf("Ingrese la cantidad de invitados: ");
    scanf("%d", &cantInv);
    char nombres[cantInv][50];
    for (int i = 0; i <cantInv; i++)
    {
        printf("Ingrese el nombre %d: ",i+1);
        scanf("%s",nombres[i]);
    }
    printf("La cantidad de invitados son: %d\n",cantInv);
    printf("Sus nombres son: \n");
     for (int i = 0; i <cantInv; i++)
    {
        printf("%d- %s\n",i+1,nombres[i]);
    }
    
    
}