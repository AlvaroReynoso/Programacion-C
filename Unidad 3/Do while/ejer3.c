#include <stdio.h>
#include <stdlib.h>
// 3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
//  positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
//  (repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
//  usuario la suma de los 10 números ingresados.
void main()
{
    int numeroReal=0, suma=0;
    int cantNum=1;
    
    do
    {
         printf("Ingrese su numero real");
        scanf("%d", &numeroReal);  
        cantNum++;  
        while (numeroReal<=0)
        {
           printf("ingrese un numero correcto");
           scanf("%d", &numeroReal);
        }
        if (numeroReal>=1);
        
        {
           suma+=numeroReal;
        }
        
        
    }   while (cantNum<=10);
        printf("Su suma es %d\n",suma);

    


}