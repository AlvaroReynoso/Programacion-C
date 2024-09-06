#include <stdio.h>
int main()
{
    float numeros[4][3]; //definido array de 4 filas y 3 columnas
    //rango para las filas [0,3]
    //rango para las columnas [0,2]
    //La cantidad de elementos en una array bidimencional es nxm, n (cantidad filas), m (cantidad columnas)
    float total = 0;
    //Lleno la matiz bidimencional por columnas 
    for (int j = 0; j<=2; j++){ //for para las columnas
        for (int i = 0; i<=3; i++){ //for para las filas
            printf("Ingrese un numero: \n");
            scanf("%f", &numeros[i][j]);
            total += numeros[i][j];
        }
    }
    printf("%.2f", total);
    return 0;
}