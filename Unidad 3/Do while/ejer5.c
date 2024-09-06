#include <stdio.h>
#include <stdlib.h>
// 5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
// usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
// almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
// usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.
// Trabajar con las siguientes variables:
// int dni = 38632584;
// float nota = 7;
// int dniIngresado = 0;
// int intentos = 1;
// int ingresaCorrectamente = 0;
void main()
{
    int dni = 38632584, dniIngresado = 0, intentos=0, ingresaCorrectamente = 0;
    float nota = 7;

    printf("Ingrese el Dni del Alumno: ");
    scanf("%d",&dni);
    intentos++;
    while (dni != 38632584)
    {
        printf("El ingreso del DNI es incorrecto, ingrese nuevamente: ");
        printf("%d",intentos);
        scanf("%d", &dni);
        intentos++;
        while (intentos==3)
        {
            printf("se bloqueo el sistema\n");
            system("pause");
            
        }
        
        // if (intentos==3)
        // {
        //     printf("se bloqueo el sistema\n");
        // }

    }
    
    printf("La nota del alumno es %.2f\n",nota);

    
    

}