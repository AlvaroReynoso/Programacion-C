#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 2. Realizar un programa que le pida al usuario que ingrese dos números, luego llamar a una 
// función que calcule la suma de ambos y la devuelva al programa principal. Desde el programa 
// principal mostrar el resultado de la suma
float suma(float numero1,float numero2);
void main()
{
    float resultado,num1,num2;
    printf("Ingrese numero 1: ");
    scanf("%f",&num1);
    printf("Ingrese numero 2: ");
    scanf("%f",&num2);
    resultado=suma(num1,num2);
    printf("%.2f",resultado);

}
float suma(float numero1,float numero2)
{

    return numero1+numero2;
}
