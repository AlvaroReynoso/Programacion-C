#include <stdio.h>  
#include <stdlib.h> 
#include<math.h>    

void main()
{
    float radio, perimetro,area,volumen;
    const float pi = 3.14159265;
    printf("Ingrese el radio que desea\n");
    scanf("%f", &radio);
    perimetro=2*pi*radio;
    area=pi*pow(radio,2);
    volumen=4/3*pi*pow(radio,3);
    printf("el perimetro es: %.2f\n el area es: %.2f\n el volumen es %.f\n",perimetro,area,volumen);
    system("pause");


}