#include <stdio.h>
#include <stdlib.h>
// Escribir un programa que solicite ingresar 10 notas de alumnos y
//  nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
void main()
{
    float notasTotal, nota, i, notaMax, notaMin;
    i = 1;
    notaMax=0;
    notaMin=0;
   
    while (i <= 10)
    {
        printf("ingrese nota deseada");
        scanf("%f", &nota);
        if (nota >= 7)
        {
            notaMax++;
        }
        else
        {
           notaMin++;
        }
        i++;
    }
    printf("las notas max son= %.2f",notaMax);
    printf("las notas min son= %.2f",notaMin);
}
