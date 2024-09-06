#include <stdio.h>
#include <stdlib.h>
#include <math.h> //para operaciones como raiz ,potencia,acos,atang,asin

/*
    Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
    perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.
*/

void main()
{
    int med1, med2;
    float superficie, perimetro, hipotenusa;
    printf("ingresar la 1er medida\n");
    scanf("%d", &med1);
    printf("ingresar la 2da medida\n");
    scanf("%d", &med2);

    hipotenusa = sqrt((med1 * med1) + (med1 * med2));
    perimetro = med1 + med2 + hipotenusa;
    superficie = (med1 * med2) / 2;
    printf("la hipotenusa es %.2f\n", hipotenusa);
    printf("el perimetro  es %.2f\n", perimetro);
    printf("la superficie es %.2f\n", superficie);
    system("pause");
}