#include <stdio.h>
#include <stdlib.h>
// 3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
// mostrar cuántas veces se repite el número 5. 
void main()
{
    int matriz[5],contadorDiv;
    
    contadorDiv=0;
    float promedio,suma=0;
    for (int i = 0; i <=4; i++)
    {
        printf("Ingrese el valor %d: ",i+1,matriz);
        scanf("%d",&matriz[i]);
        suma+=matriz[i];

        contadorDiv++;
    }
    promedio=suma/contadorDiv;
      printf("La suma es: %.2f\n",suma);
      printf("El promedio es: %.2f\n",promedio);


}