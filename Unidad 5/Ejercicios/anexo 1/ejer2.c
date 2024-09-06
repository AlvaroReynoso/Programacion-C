#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//Se realizaron múltiples encuestas en varias ciudades del país a adultos y adultos mayores sobre
//el consumo de alcohol. Para cargar los datos se disponen de las siguientes planillas:
// Escriba un programa que pueda responder a las siguientes preguntas:
// ● ¿En qué mes se consume más alcohol en el país?
// ● ¿Los adultos mayores consumen más alcohol que los más jóvenes?
// ● ¿Cuál es el promedio de consumo mensual para los adultos en el país?
int mayorConsumo(float consumoMensual[12][2]);
void consumoPorCategoria(float consumoMensual[12][2]);
void prom(float consumoMensual[12][2]);
void main()
{
    float promedio;
    int mesMayorConsumo=0;
    float consumoMensual[12][2]={{3.2,3.5},{3.1,3.2},{2.1,2.1},{2.7,2.78},{2.98,2.8},{2.1,2.1},{2.7,2.78},{2.98,2.8},{2.1,2.1},{2.7,2.78},{3.2,3.5},{3.1,3.2}};
    mesMayorConsumo=mayorConsumo(consumoMensual);
    printf("El consumo mas alto es en el mes %i\n",mesMayorConsumo);
    consumoPorCategoria(consumoMensual);
    prom(consumoMensual);
}
int mayorConsumo(float consumoMensual[12][2])
{
    int posicionMes;
    float max=0;
    float consumoMesTotal=0;
    for (int i = 0; i < 12; i++)
    {
        
        for (int j = 0; j < 2; j++)
        {
            consumoMesTotal+=consumoMensual[i][j];
            printf("%.2f\n",consumoMesTotal);
            printf("consumo mensual %.2f\n",consumoMensual[i][j]);
        }
        
        if (i==0)
        {
            max=consumoMesTotal;
        }
        else
        {
            if (consumoMesTotal>max)
            {
               max=consumoMesTotal;
               posicionMes=i+1;
            } 
        }
        
        consumoMesTotal=0;
    }
   return posicionMes;         
}
void consumoPorCategoria(float consumoMensual[12][2])
{
    float jovenes=0,viejos=0;
    for (int i = 0; i <2 ; i++)
    {
       for (int j = 0; j <12; j++)
       {
        if (i==0)
        {
            jovenes+=consumoMensual[j][i];
        }
        else
        {
         viejos+=consumoMensual[j][i];
        }
        } 
    }
    if (jovenes>viejos)
    {
        printf("Los jovenes toman mas alcohol y el numero es: %.2f",jovenes);
    }
    else
    {
         printf("Los viejos toman mas alcohol y el numero es: %.2f",viejos);
    }
}
void prom(float consumoMensual[12][2])
{
    float promedio=0;
    float acumPorMes;
    for (int i = 0; i <12; i++)
    {
        acumPorMes=0;
        for (int j = 0; j < 2; j++)
        {
           acumPorMes+=consumoMensual[i][j];
           promedio=acumPorMes/2;
           printf("El promedio del mes %d es %.2f\n",i+1,promedio);
        } 
    }
    
}