// Ej 5: Hacer un programa que imprima la siguiente figura:
// @@@@@@@@@@
// @@@@@@@@@
// @@@@@@@@
// @@@@@@@
// @@@@@@
// @@@@@
// @@@@
// @@@
// @@
// @
#include <stdio.h>
#include <stdlib.h>
void main()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("@");
        }
        printf("\n");
    }
}