// 9- Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
// o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
// altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
// es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”

#include <stdio.h>
#include <stdbool.h>
void main()
{
    float altura;
    printf("ingrese la altura deseada sin comas");
    scanf("%f", &altura);
    if (altura > 170)
    {
        printf("la altura esta por arriba de la media");
    }
    else if (altura >= 151 && altura < 169)
    {
        printf("persona de altura media");
    }
    else
    {
        printf("altura por debajo de la media");
    }
}