#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Pide al usuario que ingrese un carácter en mayúscula y
// luego imprime su equivalente en minúscula.
//(verificar el codigo ascii ,ver cuanto se suma o resta desde MIN a MAYUS)

int main()
{
    char letra1, nuevaLetra;
    printf("ingrese un caracter en mayuscula: ");
    scanf("%c", &letra1);
    nuevaLetra = letra1 + 32;
    printf("la letra %c\nEs la letra nueva %c\n", letra1, nuevaLetra);
    system("pause");
    return 0;

}