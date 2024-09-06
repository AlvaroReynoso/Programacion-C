#include <stdio.h>
#include <stdlib.h>
// 2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
// suma de sus componentes y el promedio
void main()
{
    int matriz[5],contadorDiv;
    
    contadorDiv=0;
    float promedio,suma=0;
    matriz[0]=5;
    matriz[1]=4;
    matriz[2]=3;
    matriz[3]=2;
    matriz[4]=4;
    for (int i = 0; i <=4; i++)
    {
        suma+=matriz[i];
        contadorDiv++;
    }
    printf("%d",suma);
    promedio=suma/contadorDiv;
      printf("La suma es: %.2f\n",suma);
      printf("El promedio es: %.2f\n",promedio);


}