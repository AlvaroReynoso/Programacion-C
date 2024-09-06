#include <stdio.h>
void main()

{
    int legajo, actividadesExtra, cantEstudiantes;
    int legajoConMasActividades, masDeCincoActividades, mayorActividadesExtra;

    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%i", &cantEstudiantes);

    for (int i = 1; i <= cantEstudiantes; i++)
    {
        printf("Ingrese el legajo del alumno: ");
        scanf("%i", &legajo);

        printf("En cuantas actividades extra trabajo? ");
        scanf("%i", &actividadesExtra);

        if (i == 1)
        {
            legajoConMasActividades = legajo;
            mayorActividadesExtra = actividadesExtra;
        }
        if (actividadesExtra > mayorActividadesExtra)
            {
                legajoConMasActividades = legajo;
                mayorActividadesExtra = actividadesExtra;
            }
        }
        printf("El estudiante de legajo %i hizo %i actividades extras", legajoConMasActividades, mayorActividadesExtra);
    }

    