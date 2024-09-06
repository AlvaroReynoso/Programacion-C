#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int buscar(char array[3][20],char datoAbuscar[20]);
void main()
{
    char datoAbuscar[20];
    int pos;
    char array[3][20];
    strcpy(array[0],"Alvaro");
    strcpy(array[1],"Fede");
    strcpy(array[2],"Luciano");
    printf("Ingrese numero a buscar: ");
    scanf("%s", datoAbuscar);
    pos = buscar(array,datoAbuscar);
    if (pos >= 0)
    {
        printf("Se encontro la palabra en: %d", pos);
    }
    else
    {
        printf("No se encontro la palabra");
    }
}
int buscar(char array[3][20],char datoAbuscar[20])
{
    int encontrado = 0;
    int i = 0;
    int pos = -1;

    while (encontrado == 0 && i < 3)
    {
        if (strcmp(array[i] ,datoAbuscar)==0)
        {
            encontrado = 1;
            pos = i;
            i = 4;
        }
        i++;
    }
    return pos;
}