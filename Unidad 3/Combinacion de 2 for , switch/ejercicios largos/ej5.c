#include <stdio.h>
void main()
{
    int Productos;
    float ImporteTotal, precioProd, precioDiez, precioCinco, precioTotalCinco, descuentoTotal = 0, ivaNum, iva;
    char esMiembro;
    precioDiez = 0;
    precioCinco = 0;
    ivaNum = 0.21;

    printf("es miembro S o N\n");
    scanf(" %c", &esMiembro);
    printf("ingrese cantidad de productos que compro\n");
    scanf("%d", &Productos);
    for (int i = 1; i <= Productos; i++)
    {
        printf("ingrese precio del producto %d\n", i);
        scanf("%f", &precioProd);
        ImporteTotal += precioProd;
    }
    if (ImporteTotal >= 149999 && Productos >= 2)
    {
        precioTotalCinco = ImporteTotal;
        //ImporteTotal = ImporteTotal * 0.90;
        precioDiez = ImporteTotal;
        descuentoTotal += 0.10;
    }
    if (esMiembro == 'S' || esMiembro == 's')
    {
        precioTotalCinco = precioTotalCinco * 0.05;
        //ImporteTotal = ImporteTotal * 0.95;
        descuentoTotal+=0.05;
    }
    if (esMiembro == 'N' || esMiembro == 'n')
    {
        printf("no se aplica el descuento del 5\n");
    }

    ImporteTotal= ImporteTotal-(descuentoTotal*ImporteTotal);
    printf("importe total es %.2f",ImporteTotal);
    descuentoTotal=ImporteTotal*descuentoTotal;
    printf("el descuento total es %.2f",descuentoTotal);
    precioDiez = ImporteTotal;
    iva = ImporteTotal * ivaNum;
    ImporteTotal = ImporteTotal + iva;

    printf("la cantidad de productos son:%d\n", Productos);
    printf("el precio con descuento de 10 sin IVA es:%.2f\n", precioDiez);
    printf("el descuento del 5 del total es: %.2f\n", precioTotalCinco);
    printf("Su total con IVA es: %.2f\n", ImporteTotal);
}