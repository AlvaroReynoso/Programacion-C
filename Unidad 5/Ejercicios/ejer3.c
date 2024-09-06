#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 3. Crea una función llamada esPar que reciba un número entero como parámetro y
// devuelva 1 si el número es par o 0 si es impar. Después, crea un programa que utilice
// esta función y muestre los mensajes en consola “El número ingresado es par” o “El
// número ingresado es impar” dependiendo del valor retornado por la función.
int esPar(int num);
void mensajePar(int num);
void main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    esPar(numero);
    mensajePar(numero);
}
int esPar(int num)
{
    int resultado = 0;
    if (num % 2 == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = 0;
    }
    return resultado;
}
void mensajePar(int num)
{
    if (num % 2 == 0)
    {
        printf("El %d es PAR", num);
    }
    else
    {
        printf("El %d es IMPAR", num);
    }
}
