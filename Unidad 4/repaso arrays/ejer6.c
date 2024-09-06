#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 6. Ingrese por teclado la facturación de los últimos 6 meses del año. Informar:
// a. La facturación total
// b. El promedio de facturación
// c. La máxima facturación
// d. La mínima facturación
void main()
{
    float array[6];
    float total = 0, promedio = 0, max = 0, min, contador = 0;
    for (int i = 0; i <= 5; i++)
    {
        printf("Ingrese la facturacion del mes %d:", i + 7);
        scanf("%f", &array[i]);
        total += array[i];
        contador++;
        if (i == 0)
        {
            min=array[i];
            max=array[i];
        }
        else
        {
            if (array[i]>max);
            {
               max=array[i]; 
            }
            if (array[i]<min)
            {
                min=array[i];
            }    
        }
    }
    promedio=total/contador;
    printf("El total es: %.2f\n",total);
    printf("El promedio es: %.2f\n",promedio);
    printf("La maxima facturacion es: %.2f\n",max);
    printf("La minima facturacion es: %.2f\n",min);

}
