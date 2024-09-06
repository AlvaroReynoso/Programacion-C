#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 2. Al programa del ejercicio anterior agregarle una nueva funcionalidad para que el usuario
// pueda pedir al sistema la lista de personas con sus datos ordenadas por apellido. (debe
// invocarse a un procedimiento que reciba un arreglo como parámetro ejemplo:
// ShowPatients(patients)
void cargarDatos(char datos[3][5][20]);
void buscarPorDni(char datos[3][5][20], char dni[9]);
void main()
{
    char dniAbuscar[9];
    char pacientes[3][5][20];
    cargarDatos(pacientes);
    printf("Ingrese el DNI que quiere buscar: ");
    scanf("%s",dniAbuscar);
    buscarPorDni(pacientes,dniAbuscar);
}
void cargarDatos(char datos[3][5][20])
{
    strcpy(datos[0][0], "Ana");
    strcpy(datos[0][1], "Martinez");
    strcpy(datos[0][2], "2");
    strcpy(datos[0][3], "541141200011");
    strcpy(datos[0][4], "56");
    strcpy(datos[1][0], "Camila");
    strcpy(datos[1][1], "Noe");
    strcpy(datos[1][2], "3");
    strcpy(datos[1][3], "543419485831");
    strcpy(datos[1][4], "45");
    strcpy(datos[2][0], "Bruno");
    strcpy(datos[2][1], "Noe");
    strcpy(datos[2][2], "4");
    strcpy(datos[2][3], "541145565789");
    strcpy(datos[2][4], "26");
}
void buscarPorDni(char datos[3][5][20], char dni[9])
{
    int i, j;
    i = 0;
    while (i < 3)
    {
        if (strcmp(dni,datos[i][2])==0)
        {
            printf("Los datos de la persona son: \n");
            for (j = 0; j < 5; j++)
            {
                printf("%s\n", datos[i][j]);
            }
            // i=3;
            break;      //otra opcion es i=3 para que salga del while
        }
        else
        {
            if (i==2)
            {
                printf("No se encontro el DNI");
            }
        }
        i=i+1;
    }
}
int mostrarPaciente(char pacientesdatos[3][5][20])
{
    
}