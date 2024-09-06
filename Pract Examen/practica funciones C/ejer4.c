#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 4. Realizar un programa que permita cargar los datos de un cliente, Nombre, apellido, DNI. La
// carga del DNI debe validarse a partir de una función llamada ValidarDNI, dicha función
// recibirá como parámetro de entrada el dni ingresado y devolverá una variable del tipo lógica
// Verdadero/Falso. Nota: : El DNI debe estar formado por números y tener una longitud máxima
//de 8 caracteres y una longitud mínima de 6 caracteres
int validarDni();
void main()
{
    bool validacion;
    char nombre[20];
    char apellido[20];
    int dni;
    printf("Ingrese nombre: ");
    scanf("%s",nombre);
    printf("Ingrese apellido: ");
    scanf("%s",apellido);
    dni=validarDni();
    printf("El nombre es %s\n El apellido es : %s \n El dni es: %d",nombre,apellido,dni);
}
int validarDni()
{
    int dni;
    bool validacion=false;
    do
    {
        printf("Ingrese Dni: ");
        scanf("%d",&dni); 
        if (dni<99999 || dni>99999999)
        {
          printf("El dni es incorrecto\n");
          validacion=false;
        }
        else
        {
            validacion=true;
            printf("El dni es: %d\n",dni);
        }
        
    } while (dni<99999 || dni>99999999);
    return dni;
    
}
