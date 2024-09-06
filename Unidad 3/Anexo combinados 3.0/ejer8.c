#include <stdio.h>
#include <stdlib.h>
//  Se dispone de un conjunto de corredores de una carrera de 3 vueltas,se contabiliza para cada
//  vuelta la marca obtenida por cada corredor .Se desea saber:
//  ● Número del corredor con el mejor promedio (más bajo).
//  ● Promedio general de la carrera.
//  ● Promedio general por vuelta.
//  Validar que las marcas sean un número entero positivo.
//  El número del corredor es un entero entre[2000,3000]
void main()
{
    float promedioGeneral = 0, promedioVuelta = 0, vuelta, promedioCorredor, marca, marcaMin, marcaTotal;
    int NumCorredor, contadorCorredores = 0;

    do
    {
        printf("Ingresar numero del corredor: \nIngrese 0 para dejar de agregar ");
        scanf("%d", &NumCorredor);
        marca = 0;

        if (NumCorredor != 0 && NumCorredor >= 2000 && NumCorredor <= 3000)
        {
            contadorCorredores++;
            for (int i = 1; i <= 3; i++)
            {
                do
                {
                    printf("Ingrese la vuelta: ");
                    scanf("%f", &vuelta);
                    if (vuelta < 0)
                    {
                        printf("Ingrese un valor positivo de vuelta \n");
                    }
                    else
                    {
                        marca += vuelta;
                        marcaTotal += vuelta;
                    }
                } while (vuelta < 0);
            }
            if (contadorCorredores == 1)
            {
                marcaMin = marca;
            }
            else
            {
                if (marca < marcaMin)
                {
                    marcaMin = marca;
                }
            }
            promedioVuelta = marca / 3;
            printf("El promedio de la vuelta es: %.2f\n", promedioVuelta);
        }
        else
        {
            printf("Error de numero de corredor\n");
        }

    } while (NumCorredor >= 2000 && NumCorredor <= 3000 || NumCorredor != 0);

    promedioGeneral = marcaTotal / (contadorCorredores * 3);

    printf("El promedio general de la carrera es %.2f\n", promedioGeneral);
    printf("El corredor con el promedio mas bajo es: %.2f\n", marcaMin / 3);
}