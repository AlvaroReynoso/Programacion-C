#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 13. Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, 
// concatenar de la forma "nombre apellido" para cada uno, y mostrar por consola. 
void main()
{
    char nombre[2][20];
    char apellidos[2][20];
    char nombreyapellido[2][30];
    for (int i = 0; i <2; i++)
    {
        printf("Ingrese nombre: ");
        scanf("%s",nombre[i]);   
    }
    for (int j = 0; j <2; j++)
    {
        printf("Ingrese apellido: ");
        scanf("%s",apellidos[j]);
    }
    for (int i = 0; i < 2; i++)
    {
        strcpy(nombreyapellido[i],(strcat(nombre[i]," ")));
    //  strcat(nombreyapellido[i],nombre[i]);  
    //  strcpy(strcat(nombre[i]," "),nombre[i]); 
         strcat(nombreyapellido[i],apellidos[i]);  

    printf("su nombre y apellido es: %s\n",nombreyapellido[i]);
    }
   
}