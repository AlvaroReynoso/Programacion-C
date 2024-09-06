#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main()
{
    int num, numMay, numMen, cantNum, i;
    bool primerNum;
    numMay = 0;
    numMen = 0;
    printf("ingrese la cantidad de num \n");
    scanf("%d", &cantNum);
    for (i = 0; i < cantNum; cantNum--)
    {
        printf("ingrese un numero Entero mayor o igual a 0: \n");
        scanf("%d", &num);
        if (primerNum)
        {
            numMay = num;
            numMen = num;
        }
        else
        {
            if (num > numMay)
            {
                numMay = num;
            }
            if (num < numMen)
            {

                numMen = num;
            }
        }
    }
    printf("El mayor numero es: %d y el menor es: %d \n", numMay, numMen);
}