#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 4. Realizar un programa que permita cargar los datos de un cliente, Nombre, apellido, DNI. La
// carga del DNI debe validarse a partir de una función llamada ValidarDNI, dicha función
// recibirá como parámetro de entrada el dni ingresado y devolverá una variable del tipo lógica
// Verdadero/Falso. Nota: El DNI debe estar formado por números y tener una longitud máxima
// de 8 caracteres y una longitud mínima de 6 caracteres.
void ValidarDni(int *dni);
void main()
{
    int validar;
    char nombre[10];
    char apellido[10];
    int dni;
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", apellido);
    ValidarDni(&dni);
    printf("%s %s DNI: %d", nombre, apellido, dni);
}
void ValidarDni(int *dni)
{
    bool validar = false;
    do
    {
        printf("Ingrese DNI: ");
        scanf("%d", &*dni);
        if (*dni < 99999 || *dni > 99999999)
        {
            validar = false;
            printf("DNI invalido \n");
        }
        else
        {
            validar = true;
        }

    } while (validar == false);
    // return *dni;
}