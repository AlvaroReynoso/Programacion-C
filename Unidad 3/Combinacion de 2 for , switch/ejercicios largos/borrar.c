#include <stdio.h>

int main() {
    int Productos;
    float ImporteTotal = 0, precioProd, precioDiez = 0, precioCinco = 0, precioTotalCinco = 0, iva;
    char esMiembro;
    float descuentoDiez = 0.10; // 10%
    float descuentoCinco = 0.05; // 5%
    float ivaNum = 0.21; // 21%

    printf("¿Es miembro? (S/N): ");
    scanf(" %c", &esMiembro);

    printf("Ingrese cantidad de productos que compró: ");
    scanf("%d", &Productos);

    for (int i = 1; i <= Productos; i++) {
        printf("Ingrese precio del producto %d: ", i);
        scanf("%f", &precioProd);
        ImporteTotal += precioProd;
    }

    if (ImporteTotal >= 149999 && Productos >= 2) {
        precioTotalCinco = ImporteTotal * descuentoCinco;
        ImporteTotal *= (1 - descuentoDiez); // Aplica el descuento del 10%
        precioDiez = ImporteTotal;
    }

    if (esMiembro == 'S' || esMiembro == 's') {
        precioTotalCinco = ImporteTotal * descuentoCinco;
        ImporteTotal *= (1 - descuentoCinco); // Aplica el descuento del 5%
    } else {
        printf("No se aplica el descuento del 5%%\n");
    }

    iva = ImporteTotal * ivaNum;
    ImporteTotal += iva;

    printf("Cantidad de productos: %d\n", Productos);
    printf("Precio con descuento de 10%% sin IVA: %.2f\n", precioDiez);
    printf("Descuento del 5%% del total: %.2f\n", precioTotalCinco);
    printf("Total con IVA: %.2f\n", ImporteTotal);

    return 0;
}