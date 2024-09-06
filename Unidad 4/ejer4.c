#include <stdio.h>
#include <stdlib.h>
// 4. Dado el vector {10, 20, 5, 15, 30, 20}
// a. Informar el vector de la forma: "Índice: X, Valor: Y".
// b. Totalizar el vector e informar el total.
// c. Informar el contenido de las posiciones impares.
// d. Informar las posiciones que contienen números impares.
// e. Informar el mayor número.
// f. Informar cuántas veces aparece el número 20.
void main()
{
    int VectorNum[6],max,contadorveinte=0, total = 0;

    VectorNum[0] = 10;
    VectorNum[1] = 20;
    VectorNum[2] = 5;                   
    VectorNum[3] = 15;
    VectorNum[4] = 30;              
    VectorNum[5] = 20;
    for (int i = 0; i <= 5; i++)                            
    {
        printf("El indice %d tiene un valor de: %d\n", i, VectorNum[i]);            
        total += VectorNum[i];
        if (VectorNum[i] % 2 != 0)          
        {  
            printf("La posicion del vector impar es: %d y el contenido es %d\n", i,VectorNum[i]);         
            
        }
        if (i==0)
        {
           max=VectorNum[i]; 
        }
        if (VectorNum>max)
        {
            max=VectorNum[i];
        }
        if (VectorNum[i]==20)
        {
          contadorveinte++;  
        }
    }
    printf("El total de la suma de los vectores da: %d\n", total);
    printf("El numero mayor es: %d\n", max);
    printf("Las veces que aparece el numero 20 son: %d\n", contadorveinte);
}