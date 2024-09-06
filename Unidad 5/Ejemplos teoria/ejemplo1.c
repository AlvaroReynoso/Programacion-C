#include <stdio.h>
#include <stdlib.h>
// CON ESTE PROTOTIPO NO AHCE FALTA QUE SUBA LA FUNCION SUMA PARA QUE COMPILE EN ORDEN, SI NO ESTUVIERA
//TENDRIA QUE SUBIR LA FUNCION SUMA ARRIBA DE TODO ANTES DE LA FUNCION MAIN
float sumar(float num1, float num2); //prototipo de la función sumar
// esto es lo mismo: float sumar(float, float); es decir no poner el nombre de los parámetros, solo el tipo de dato

int main()
{
    float numero1, numero2, resultado;
    
    printf("Ingresa primer numero:\n");
    scanf("%f", &numero1); //90
    printf("Ingresa segundo numero:\n");
    scanf("%f", &numero2); //12
    

    resultado = sumar(numero1, numero2); //llamada a la función sumar()

    printf("La suma es: %f\n", resultado);
     
    system("pause"); 
    return 0;
}

//función sumar 
float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;

    return respuesta;
}