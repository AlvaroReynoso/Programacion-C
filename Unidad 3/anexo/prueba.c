#include <stdio.h>
#include <stdlib.h>
//    Un alumno desea recursar una materia del cuatrimestre anterior, para ello debe enviar una
// solicitud. Se desea validar que los datos requeridos para enviar la solicitud estén cargados
// correctamente.
// Datos requeridos:
// ● Nombre y Apellido // NO HACE FALTA
// ● Legajo (Numérico - longitud 5) // Menor a 99999
// ● Materia a recursar (Mostrar una lista y validar que ingrese una de las opciones
// mostradas). // Mostrar 1-lab comp 1, 2-program 1, 3-matemática
// ● Comisión cursado cuatrimestre anterior (Mostrar una lista y validar que ingrese una de
// las opciones mostradas). // Mostrar 1, 2 o 3
// ● Turno de preferencia para recursar (Opciones posibles: [TM/ TT/TN] ). // M = MAÑANA, T = TARDE, N = NOCHE
void main()
{
    int legajo, MateriaRecursar, ComisionAnterior;
    char Turno;

    printf("ingrese numero de legajo\n");
    scanf("%d", &legajo);
    while (legajo > 99999 || legajo < 10000)
    {
        printf("su numero es incorrecto, ingrese nuevamente su legajo\n");
        printf("Ingrese su numero de legajo\n");
        scanf("%d", &legajo);
    }
    do
    {

        printf("Ingrese el numero de materia a recursar: 1-Lab 2-Programacion 3-Matematica\n");
        scanf("%d", &MateriaRecursar);
        if (MateriaRecursar > 3 || MateriaRecursar < 1)
        {
            printf("El numero ingresado es incorrecto, ingrese nuevamente\n");
            scanf("%d", &MateriaRecursar);
        }

    } while (MateriaRecursar > 3 || MateriaRecursar < 1);

    do
    {
        printf("ingrese comision que desee: para comision 01 ingrese 1 ,para comision 02 -2, para comision 03 3- \n");
        scanf("%d", &ComisionAnterior);
        if (ComisionAnterior < 1 || ComisionAnterior > 3)
        {
            printf("ingrese una comision correcta\n");
            printf("ingrese comision que desee: para comision 01 ingrese 1 ,para comision 02 -2, para comision 03 3- \n");
            scanf("%d", &ComisionAnterior);
        }

    } while (ComisionAnterior < 1 || ComisionAnterior > 3);
    do
    {
        printf("seleccione el turno que desee: M si desea mañana, T de tarde o N noche");
        scanf(" %c",&Turno);
        if ((Turno !='M' && Turno != 'm' )&&( Turno != 'N' && Turno != 'n' )&&( Turno != 'T' && Turno != 't'));
        {
            printf("ingrese un turno correcto\n");

        }

    } while ((Turno !='M' && Turno != 'm' )&&( Turno != 'N' && Turno != 'n' )&&( Turno != 'T' && Turno != 't'));

    printf("el numero de legajo es: %d\n", legajo);
    if (MateriaRecursar == 1)
    {
        printf("la materia a cursar es %d que equivale con -LAB \n", MateriaRecursar);
    }
    if (MateriaRecursar == 2)
    {
        printf("la materia a cursar es %d que equivale con -Programacion \n", MateriaRecursar);
    }
    if (MateriaRecursar == 3)
    {
        printf("la materia a cursar es %d que equivale con -Matematica\n", MateriaRecursar);
    }

    printf("la comision que desea es %d\n",ComisionAnterior);
    if (Turno=='M'|| Turno=='m')
    {
        printf("el turno ingresado es Maniana\n");
    }
      if (Turno=='T'|| Turno=='t')
    {
        printf("el turno ingresado es Tarde\n");
    }
      if (Turno=='N'|| Turno=='n')
    {
        printf("el turno ingresado es Noche\n");
    }
    

}