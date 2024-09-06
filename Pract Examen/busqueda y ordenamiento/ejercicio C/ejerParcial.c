#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void cargaDatos (char array[4][4][40]);
float acumTotal(char array[4][4][40]);
void cargarCant(char array[4][4][40]);

void main()
{
    float sumaTotal=0;
    char array[4][4][40];
    cargaDatos(array);
    cargarCant(array);
    sumaTotal=acumTotal(array);
    printf("El precio total es: %.2f\n",sumaTotal);
    sumaTotal=acumTotal(array);
    printf("El monto del iva es: %.2f\n",sumaTotal*0.21);
    
}

void cargaDatos (char array[4][4][40])
{
    strcpy(array[0][0],"01");
	strcpy(array[0][1],"3500");
	strcpy(array[0][2],"Mantel 2x2");
	strcpy(array[0][3],"");
	strcpy(array[1][0],"02");
	strcpy(array[1][1],"800.99");
	strcpy(array[1][2],"Plato playo 24cm");
	strcpy(array[1][3],"");
	strcpy(array[2][0],"03");
	strcpy(array[2][1],"1450.50");
	strcpy(array[2][2],"Copa vino");
	strcpy(array[2][3],"");
	strcpy(array[3][0],"04");
	strcpy(array[3][1],"650.50");
	strcpy(array[3][2],"Plato hondo 22cm");
	strcpy(array[3][3],"");
}

void cargarCant(char array[4][4][40])
{
    for (int i = 0; i < 4; i++)
    {
    printf("Ingrese la cantidad vendida de %s: ",array[i][2]);
    scanf("%s",array[i][3]);
    }
}
float acumTotal(char array[4][4][40])    
{
    float sumaTotal=0;
    
    for (int i = 0; i < 4; i++)
    {
        sumaTotal+=atof(array[i][1])*atof(array[i][3]);
    }
    return sumaTotal;  
}