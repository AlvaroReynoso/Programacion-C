#include <stdio.h>

#define MAX_NUMEROS 100 // Definimos el tamaño máximo del array

int main() {
    int numeros[MAX_NUMEROS]; // Declaramos un array para almacenar los números
    int n; // Variable para almacenar la cantidad de números ingresados
    int suma = 0;
    float promedio;

    printf("Ingrese la cantidad de números (máximo %d): ", MAX_NUMEROS);
    scanf("%d", &n);

    // Verificamos que la cantidad de números ingresados no exceda el tamaño máximo del array
    if (n > MAX_NUMEROS) {
        printf("Error: La cantidad de números ingresados supera el tamaño máximo del array.\n");
        return 1; // Salimos del programa con un código de error
    }

    // Solicitamos al usuario que ingrese los números y los almacenamos en el array
    printf("Ingrese los %d números:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Calculamos la suma de los números
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }

    // Calculamos el promedio de los números
    promedio = suma / n;

    // Mostramos los resultados
    printf("La suma de los números es: %d\n", suma);
    printf("El promedio de los números es: %.2f\n", promedio);

    return 0;
}