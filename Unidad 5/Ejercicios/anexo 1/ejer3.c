#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// Se disponen de los costos de producción de los n productos de la empresa líder en lácteos.
// Además se dispone del precio de venta en el mercado actualizado.
// Las planillas no fueron depuradas y no se encuentran ordenadas por código de producto.
// Se necesita conocer:
// ● El código de producto con el mejor margen de ganancia.
// ● El código de producto con el peor margen de ganancia.
// ● El margen de ganancia medio de la empresa.
int mejorGanancia(int planillaUno[2][2],int planillaDos[2][2]);
void main()
{
   int max=0;
   int planillaProduccion[2][2]={{1,2},{55,186}};
   int planillaVenta[2][2]={{2,1},{250,190}};
   max=mejorGanancia(planillaProduccion,planillaVenta);
   printf("La mejor ganancia es: %d",max);

}
int mejorGanancia(int planillaUno[2][2],int planillaDos[2][2])
{
   int codigoMax;
   int max=0;
   for (int i = 0; i <2; i++)
   {
      for (int j = 0; j <2; j++)
      {
         if (j==0)
         {
            max=planillaUno[i][j];
         }
         else
         {
            if(planillaUno[i][j]>max)
            {
               max=planillaUno[i][j];
            }
         }
      }
      
   }
   for (int i = 0; i <2; i++)
   {
      for (int j = 0; j <2; j++)
      {
         if (j==0)
         {
            max=planillaDos[i][j];
         }
         else
         {
            if(planillaDos[i][j]>max)
            {
               max=planillaDos[i][j];
            }
         }
      } 
   }
   return max;
   
}