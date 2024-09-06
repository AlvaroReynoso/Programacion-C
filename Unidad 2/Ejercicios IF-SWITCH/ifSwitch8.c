// 8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
// sea mayor o igual que el importe a retirar
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
void main()
{
    float total, retirado;
    bool validacion;
    total = 10000;
    printf("cuanto dinero quiere retirar\n");
    do
    {
        scanf("%f", &retirado);
        if (total >= retirado && retirado > 0.1)
        {
            validacion = true;
            total = total - retirado;
            printf("retiro: $%.2f ,su total es ahora: $%.2f\n", retirado, total);
        }
        else
        {
            validacion = false;
            printf("ingrese una cantidad que pueda extraer");
        }
    } while (validacion == false);
}
