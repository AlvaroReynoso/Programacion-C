/*Escriba un programa que pida ingresar un número y a 
continuación escriba en la consola si el mismo  es par o impar. 
Para ello desarrollar una función llamada 
esPar que reciba un entero y retorne un 1 si el número 
es par y un 0 si el número no es par.*/

#include <stdio.h>
#include <stdlib.h>

int esPar(int numero);
void mensajeEsPar(int numero);

int main()
{
    int numeroIngresado, res;

    printf("Ingrese un número entero\n");
    scanf("%d", &numeroIngresado);

    res = esPar(numeroIngresado);

    if(res == 1)
    {
        printf("El número ingresado es PAR\n");
    }
    else
    {
        printf("El numero ingresado es IMPAR\n");
    }

    return 0;
}
void mensajeEsPar(int numero)
{
   
    if(numero % 2 == 0)
    {
         printf("El número ingresado es PAR\n");
    }
    else
    {
        printf("El numero ingresado es IMPAR\n");
    }

}

//Esta función recibe un entero y retorna un 1 si el número es par y un 0 si el número no es par
int esPar(int numero)
{
    int resultado = 0;

    if(numero % 2 == 0)
    {
        resultado = 1;
    }

    return resultado;
}

//devuelve 0 si el numero es par y uno si el numero es impar
int esImpar(int numero)
{
    
    return numero % 2;
}