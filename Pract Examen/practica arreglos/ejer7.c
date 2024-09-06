#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 7. Escribir un algoritmo que muestre un país y sus ciudades relacionadas. Los países y sus ciudades son:

void main()
{
    char PaisYciudades[3][4][50]={{" Argentina "," Buenos Aires "," Rosario "," Cordoba \n"},{" Colombia "," Cali "," Bogota "," Santa Marta \n"},{" Brasil "," Brasilia "," Rio de Janeiro "," San Pablo \n"}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <4; j++)
        {
           printf("%s",PaisYciudades[i][j]);
        }
        
    }
    
}