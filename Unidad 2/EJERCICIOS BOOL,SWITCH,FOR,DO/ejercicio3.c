// 3. Realizar un programa de conversión que traduzca un peso ingresado en Kg a gramos, o
// a libras, o a toneladas o a onzas. El sistema debe preguntar al usuario a qué lo quiere
// convertir
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int opc;
    float total;
    float kg;
    printf("ingrese 1 si quiere de kg-gr, 2 si quiere kg-lb o 3 si quiere kg-onz o 4 si quiere kg-ton \n");
    scanf("%d", &opc);
    printf("cuantos kg quiere introducir\n");
    scanf("%f", &kg);
    switch (opc)
    {
    case 1:
         total= kg * 1000;
        printf("su peso es %.2f", total);
        break;
    case 2:
        total = kg * 2.2042;
        printf("su peso pasado a libras es %.2f", total);
    case 3:
        total = kg * 35.2729;
        printf("su peso pasado a onz es %.2f", total);
        break;
    case 4:
        total = kg /1000;
        printf("su peso pasado a ton es %.2f", total);
        break;
    default:
        printf("ingrese un numero correcto");
        break;
    }
}