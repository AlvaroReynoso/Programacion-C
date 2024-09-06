#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
// Cada ítem del vector representa la inflación de un mes de tal manera que el primer
// ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
// que es 0.9 representa la inflación de diciembre. Se pide:
// a. Informar la inflación anual
// b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 =
// 0.1
// c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 =
// 0.9
void main()
{
    float arrayInflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float inflacionAnual = 0;
    float inflacionMasBaja, inflacionMasAlta = 0;
    int i, posicionAlta, posicionBaja;
    for (i = 0; i <= 11; i++)
    {
        inflacionAnual += arrayInflacion[i];
        if (i == 0)
        {
            inflacionMasBaja = arrayInflacion[i];
            inflacionMasAlta = arrayInflacion[i];
        }
        else
        {
            if (arrayInflacion[i] < inflacionMasBaja)
            {
                inflacionMasBaja = arrayInflacion[i];
                posicionBaja = i;
            }
            if (arrayInflacion[i] > inflacionMasAlta)
            {
                inflacionMasAlta = arrayInflacion[i];
                posicionAlta = i;
            }
        }
    }
    printf("La inflacion anual es de: %.2f\n", inflacionAnual);
    printf("La inflacion mas baja fue en el mes %d y es de: %f\n", posicionBaja + 1, inflacionMasBaja);
    printf("La inflacion mas baja fue en el mes %d y es de: %f\n", posicionAlta + 1, inflacionMasAlta);
}