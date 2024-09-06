#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 1. Realizar un programa que llame a un subproceso que pida al usuario ingresar el nombre, el 
// apellido y la edad de una persona, luego llamar a otro subproceso que muestre por pantalla 
// los datos de la persona. 
void ingresoDatos(char nombre[],char apellido[] ,char edad[]);
void muestraDatos(char name[],char lastName[],char age[]);
void main()
{
    char nombre[10];
    char apellido[10];
    char edad[3];
    ingresoDatos(nombre,apellido,edad);
    muestraDatos(nombre,apellido,edad);
}
void ingresoDatos(char nombre[],char apellido[], char edad[])
{
    printf("Ingrese su nombre: ");
    scanf("%s",nombre);
    printf("Ingrese su apellido: ");
    scanf("%s",apellido);
    printf("Ingrese su edad: ");
    scanf("%s",edad);
}
void muestraDatos(char name[],char lastName[],char age[])
{
    printf("%s %s %s",name,lastName,age);
}