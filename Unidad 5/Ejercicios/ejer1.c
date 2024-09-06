#include <stdio.h>
#include <stdlib.h>
/*
Crear un programa en C que dé la bienvenida al usuario solicitándole su inicial y
mostrando un mensaje que incluya dicha inicial. Para llevar a cabo esta tarea,
desarrolla una función llamada mensajeBienvenida que reciba como argumento la
inicial ingresada por el usuario. Esta función deberá imprimir un mensaje de
bienvenida en la consola, incluyendo la inicial proporcionada como parámetro. En el
programa principal (main), se solicitará al usuario que ingrese su inicial y luego se
llamará a la función mensajeBienvenida, pasándole la inicial ingresada como
argumento.
*/
void mensajeBienvenida(char inicial);
void main()
{
    char inicial;
    printf("Ingrese la inicial de su nombre: ");
    scanf(" %c", &inicial);
    mensajeBienvenida(inicial);
}
void mensajeBienvenida(char inicial)
{
    printf("Bienvenido a la consola %c!", inicial);
};