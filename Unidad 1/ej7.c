#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 7- Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
// sueldo e imprimirlo
void main()
{

    int hora = 2000;
    float sueldo, tiempoT = 60.5;
    sueldo = hora * tiempoT;
    printf("el monto del sueldo es= %.1f$\n", sueldo);
    system("pause");
}