// En Bike’s Best Shop, un comercio que se especializa en la venta de distintos tipos de
// bicicletas, se está armando una nueva promoción de descuentos según el tipo de cliente y
// la bicicleta que desea comprar. Luego de hablar con el negocio, armamos los siguientes
// requisitos para aplicar los descuentos:

// - Hay tres tipos de bicicletas: deportiva, común(sin cambios). A su vez, la común se divide
// en con canasto y sin canasto.

// - Hay dos tipos de medio de pago: efectivo/débito o crédito.

// - Si el cliente es jubilado y compra una bicicleta deportiva, obtiene un 25% de
// descuento en el total de lo comprado. En cualquier otro caso,el jubilado tiene un
// 10% de descuento.

// - Si el cliente paga en efectivo/débito, posee un 15% de descuento extra, indistinto del
// tipo de cliente o bicicleta seleccionada
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int medioPago, tipoBici;
    char esJubilado;
    char tipoBiciComun;
    float PrecioBici, descuento;
    printf("Ingrese medio de pago 1-efectivo/debito\n 2- credito");
    scanf("%d", &medioPago);
    printf("Es jubilado? Ingrese 'S' o 'N'");
    scanf(" %c", &esJubilado);
    printf("Ingrese el tipo de bicicleta 1-Deportiva\n 2-Comun");
    scanf("%d", &tipoBici);
    if (tipoBici == 1)
    {
        PrecioBici = 500;
    }
    else
    {
        printf("desea que tenga canasto? Ingrese S o N segun el caso\n");
        scanf(" %c", &tipoBiciComun);
        if (tipoBiciComun == 'S' || tipoBiciComun == 's')
        {
            PrecioBici = 400;
        }
        else
        {
            PrecioBici = 300;
        }
    }

    if (esJubilado == 'S'|| esJubilado=='s')
    {
        if (tipoBici == 1)
        {
            descuento = 0.25;
        }
        else
        {
            descuento = 0.10;
        }
    }

    if (medioPago == 1)
    {
        descuento = descuento + 0.15;
    }
    PrecioBici = PrecioBici - PrecioBici * descuento;
    printf("El precio de la bici es %.2f\n", PrecioBici);
}