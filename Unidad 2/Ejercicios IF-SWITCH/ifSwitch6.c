// 6- Leer una nota de un alumno por consola e informar la condición del mismo. (menor
// que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
// que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
// inválida”.
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
void main()
{
    float nota;
    bool validacion;
    printf("ingrese nota del alumno\n");
    do
    {
        scanf("%f", &nota);
        if (nota < 4 && nota>0)
        {
            validacion =true;
            printf("alumno reaprobado\n");
            
        }
        else if (nota >= 4 && nota < 6)
        {
            validacion =true;
            printf("alumno regular\n");
            
                                                    //si entra en cualquier if de true ,termina el ciclo
        }
        else if (nota >= 6 && nota <= 10)
        {
            validacion =true;
            printf("alumno promocionado \n");
            
        }
        else
        { 
            validacion = false;           //<--------------------------------------------------------------                                    |
            printf("nota invalida,ingrese valor correcto\n");                                        // |
                                                               // ----|-----------------------       //   |                               
        }                                                                                            // |
                                                                                                //      |
                                                                                                    //  |
    }                                                                                                // |    
     while (validacion ==false);                      // al entrar en constante false ,se repite esta linea
}