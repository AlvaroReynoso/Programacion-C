#include <stdio.h>  //me permite hacer uso de la funcion printf y scanf
#include <stdlib.h> //me permite hacer la llamada a la función system
#include <math.h>   ////para operaciones como raiz ,potencia,acos,atang,asin
/* 5- El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
usuario los resultado*/
//pow (lado2,2)-----> potencia ,2------> cant potencia 

void main()
{
    int lado1, lado2;
    float diagonal, superficie, perimetro;
    printf("ingresar valor 1\n");
    scanf("%d", &lado1);
    printf("ingresar valor 2\n");
    scanf("%d", &lado2);
    diagonal = sqrt((lado1 * lado1) + (lado2 * lado2));
    superficie = lado1 * lado2;
    perimetro = 2 * (lado1 + lado2);
    printf("la diagonal es %.2f\n", diagonal);
    printf("la superficie es %.2f\n", superficie);
    printf("la diagonal es %.2f\n", perimetro);
    system("pause");
}