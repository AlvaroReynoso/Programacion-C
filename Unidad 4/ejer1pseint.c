//Escribir un algoritmo que cree un arreglo de dimensión 7,
// asignarle un valor numérico cualquiera a cada posición y
// escribirlos en pantalla.
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int valores[10];

    valores[0]=2;           //va desde 0 a tal num deseado
    valores[1]=4;
    valores[2]=5;
    valores[3]=7;
    valores[4]=321;
    valores[5]=232;
    valores[6]=151;
    valores[7]=552;
    valores[8]=221;
    valores[9]=221421;
    for (int i = 0; i <=9; i++)
    {
       printf("los valores son %d\n",valores[i]);   //el i muestra todos los agregados que estan en for (i)
    }
    
}