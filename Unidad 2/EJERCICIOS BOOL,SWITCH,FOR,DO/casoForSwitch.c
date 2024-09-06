#include <stdio.h>
#include <stdlib.h>
void main()
{
    int nroMes;
    printf("ingrese el numero de mes que desea para contar los prox hasta el ultimo\n");
    scanf("%d",&nroMes);
    for (nroMes =1; nroMes <=12; nroMes++) {
        switch (nroMes)
        {
        case 2:
            printf("terminan en 28, bisiesto\n"); 
            break;
        case 4: case 6: case 9: case 11:
            printf("terminan en 30\n");
            break;

        default:
            printf("terminan en 31\n");
            break;
        }

    }
}