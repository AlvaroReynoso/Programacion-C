#include <stdio.h>
#include <stdlib.h>

// 8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
// calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
// no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
// por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
// Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
// mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
// el 2,5% de la suma de sus ventas.
void main()
{
    int validacion = 0;
    float ventasA = 0, ventasB = 0, ventasC = 0, ventasD = 0, ventasE = 0;
    float totalVentasA=0,totalVentasB=0,totalVentasC=0,totalVentasD=0,totalVentasE=0;
    char departamento;
    do
    {
        printf("Ingrese departamento (A,B,C,D,E): ");
        scanf(" %c", &departamento);
        if(departamento != 'A' && departamento != 'a' && departamento != 'B' && departamento != 'b' && departamento != 'C' && departamento != 'c' && departamento != 'D' && departamento != 'd' && departamento != 'E' && departamento != 'e' && departamento!='n'&& departamento!='N' )
        {
            printf("El codigo es erroneo, ingrese otra vez el codigo");
        }
        if (departamento!='N' && departamento!='n')
        {
        
        if (departamento == 'A' || departamento == 'a')
        {
            do
            {
                printf("Ingrese las ventas del departamento A.\nIngrese 0 para finalizar sus ventas : ");
                scanf("%f", &ventasA);
                totalVentasA+= ventasA;

            } while (ventasA != 0);
        }
        {
            if (departamento == 'B' || departamento == 'b')
            {
                do
                {
                    printf("Ingrese las ventas del departamento B.\nIngrese 0 para finalizar sus ventas : ");
                    scanf("%f", &ventasB);
                    totalVentasB+= ventasB;
                } while (ventasB !=0);
            }
        }

        if (departamento == 'C' || departamento == 'c')
        {
            do
            {
                printf("Ingrese las ventas del departamento C.\nIngrese 0 para finalizar sus ventas : ");
                scanf("%f", &ventasC);
                totalVentasC += ventasC;
            } while (ventasC !=0);
        }
        if (departamento == 'D' || departamento == 'd')
        {
            do
            {
                printf("Ingrese las ventas del departamento D.\nIngrese 0 para finalizar sus ventas : ");
                scanf("%f", &ventasD);
                totalVentasD += ventasD;
            } while (ventasD !=0);
        }
        if (departamento == 'E' || departamento == 'e')
        {
            do
            {
                printf("Ingrese las ventas del departamento E.\nIngrese 0 para finalizar sus ventas : ");
                scanf("%f", &ventasE);
                totalVentasE += ventasE;
            } while (ventasE !=0);
        }
        }
    } while (departamento!='N' && departamento!='n');
    printf("El vendedor del codigo A Tiene una comision de %.2f\n", totalVentasA * 0.025);
    printf("El vendedor del codigo B Tiene una comision de %.2f\n", totalVentasB * 0.025);
    printf("El vendedor del codigo C Tiene una comision de %.2f\n", totalVentasC * 0.025);
    printf("El vendedor del codigo D Tiene una comision de %.2f\n", totalVentasD * 0.025);
    printf("El vendedor del codigo E Tiene una comision de %.2f\n", totalVentasE * 0.025);
}