// Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
// un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
// dicha situación.
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
void main()
{
    float valorVenta;
    bool validacion;
    printf("ingrese valor de la venta");
    
    do{
        scanf("%f", &valorVenta);
    if (valorVenta >=100000)
    {
        validacion = true;
        valorVenta = valorVenta * 0.15;
        printf("el descuento es %.2f", valorVenta);
    }
    else if (valorVenta <100000 && valorVenta>0)
    {
        validacion = true;
        valorVenta = valorVenta * 0.10;
        printf("el descuento es %.2f", valorVenta);
    }
    else
    {
        validacion = false;
        printf("ingrese un valor correcto"); 
        }
    }
    while (validacion == false);
}