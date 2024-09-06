#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//9. Crear una función que reciba un caracter y un número, y escriba un “triángulo”
// formado por ese caracter, que tenga como anchura inicial la que se ha indicado.
// Por ejemplo, si la caracter es * y la anchura es 4, debería escribir:
// ****
// ***
// **
// *
char triangulo(char caracter,int numero);
void main()
{
    char carac;
    int num;
    carac=triangulo(carac,num);
}
char triangulo(char caracter,int numero)
{
    int numeroDos;
    printf("Que digito quiere para su triangulo: ");
    scanf(" %c",&caracter);
    printf("De cuantos digitos quiere la anchura de su triangulo?: ");
    scanf("%d",&numero);
    numeroDos=numero;
    for (int  j =0; j<=numeroDos; j++)
    {
       

       for (int i =0; i <numero; i++)
    {
           printf("%c",caracter); 
            numero--; 
    } 
     printf("\n");
    }
    return caracter;

}