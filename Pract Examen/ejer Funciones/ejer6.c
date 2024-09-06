#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 6. Dada la siguiente lista de corredores de karting y el resultado de cada uno
// Realizar un programa que muestre la siguiente opción de menú al usuario:
// “1- Mostrar lista de corredores 2 - Mostrar los tres mejores 3- Mostrar lista de completa de
// resutados 4 - salir.”
//
// La opción 1 se llevará a cabo mediante un subproceso llamado “ListaCorredores” que
// mostrará al usuario los nombres y apellidos de los corredores, la opción 2 llama a otro
// subproceso llamado “ListaMejores” que mostrará a los corredores que salieron en las
// primeras 3 posiciones, la opción 3 llamará a un subproceso llamado “ListaPosiciones” que
// mostrará la lista de corredores con sus posiciones y la opción 4 es la salida del sistema.
void listaNombres(char nombre[10][30]);
void tresMejores(char nombre[10][30], int numeros[]);
void lista(char nombre[10][30], int numeros[]);
void main()
{
    int opc;
    int numeros[] = {7, 6, 1, 2, 8, 3, 10, 9, 4, 5};
    char nombres[10][30] = {"Pedro Gomez", "Martín Ceres", "Ernestina Diaz", "Gastón Bautista", "Dalma Alvarez", "Patricio Fernandez", "Faustina Martinez", "Andrea Perez", "Hilda Lopez", "León García"};

    do
    {
        system("cls");
        printf("1- Mostrar lista de corredores \n2 - Mostrar los tres mejores \n3- Mostrar lista de completa de resutados \n4 - salir \n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            system("cls");
            listaNombres(nombres);
            system("pause");
            break;
        case 2:
            system("cls");
            tresMejores(nombres, numeros);
            system("pause");
            break;
        case 3:
            system("cls");
            lista(nombres, numeros);
            system("pause");
            break;
        case 4:
            system("cls");
            break;
        default:
            break;
        }
    } while (opc != 4);
}

void listaNombres(char nombre[10][30])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", nombre[i]);
    }
}

void lista(char nombre[10][30], int numeros[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%s ---- %d\n", nombre[i], numeros[i]);
    }
}

void tresMejores(char nombre[10][30], int numeros[])
{
    int mejorUno, mejorDos, mejorTres;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == 1)
        {
            printf("La persona que salio 1ra fue: %s\n", nombre[i]);
        }
        else
        {
            if (numeros[i] == 2)
            {
                printf("La persona que salio 2ra fue: %s\n", nombre[i]);
            }
            if (numeros[i] == 3)
            {
                printf("La persona que salio 3ra fue: %s\n", nombre[i]);
            }
        }
    }
}