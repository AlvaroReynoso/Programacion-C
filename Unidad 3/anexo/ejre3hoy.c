#include <stdio.h>
#include <conio.h>

int main()
{
    int suma, valor;
    suma = 0;
    do
    {
        printf("Ingrese un valor:");
        scanf("%i", &valor);
        if (valor != 9999)
        {
            suma = suma + valor;
        }
    } while (valor != 9999);
    printf("El valor acumulado es ");
    printf("%i", suma);
    printf("\n");

    if (suma == 0)
    {
        printf("El valor acumulado es cero.");
    }
    else
    {
        if (suma > 0)
        {
            printf("El valor acumulado es positivo.");
        }
        else
        {
            printf("El valor acumulado es negativo");
        }
    }

    if (suma == 0)
    {
        printf("El valor acumulado es cero.\n");
    }
    else if (suma > 0)
    {
        printf("El valor acumulado es mayor que cero.\n");
    }
    else
    {
        printf("El valor acumulado es menor que cero.\n");
    }
    getch();
    return 0;
}