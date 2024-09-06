#include <stdio.h>

void main() {
    float horas_trabajadas;
    int valor_hora=800;
    float sueldo;

    // Solicitar al usuario ingresar el tiempo trabajado en horas
    printf("Ingrese el tiempo trabajado por el contador en horas: ");
    scanf("%f", &horas_trabajadas);


    // Calcular el sueldo
    sueldo = horas_trabajadas * valor_hora;

    // Imprimir el sueldo
    printf("El sueldo del contador es: %.2f pesos\n", sueldo);

}
