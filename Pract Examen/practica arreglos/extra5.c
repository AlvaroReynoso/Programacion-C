#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 5. Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingresé 
// los nombres de la misma y el tipo de menú. Al finalizar la carga mostrar al usuario la lista de invitados con el menú seleccionando. 
// El menú puede ser "tradicional", "vegano" y "Sin TACC" 
void main()
{
    int numIngreso;
    printf("Ingrese cantidad de personas invitadas: ");
    scanf("%d",&numIngreso);
    char nombre[numIngreso][30];
    char menu[numIngreso][20];
    for (int i = 0; i <numIngreso; i++)
    {
        printf("Ingrese el nombre del invitado %d",i+1);
        scanf("%s",nombre[i]);
        printf("Ingrese el menu del invitado %d: ",i+1);
        scanf("%s",menu[i]);
    }  
    for (int i = 0; i <numIngreso; i++)
    {
        printf("El nombre del invitado es: %s y el menu es : %s \n",nombre[i],menu[i]);
    }
     
}