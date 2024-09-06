//    Ingresar 5 números enteros e informar el mayor y el menor. Nota: Los números
// ingresados no deben ser negativos.

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,max,min,i;
    max=0;
    min=0;
    for (i=1; i <=5; i++)
    {
        printf("coloque el %i numero\n",i); 
        scanf("%d",&num); //1er error llamar al num &num
        if (num>max) {
            max=num;
            printf("el numero max es ahora %d\n",max);
        }
        if (num<min || min==0)
        {
            min=num;  //es min =num ,necesito guardar en la variable el menor ,desp el num se sobreescribe otra vez
            printf("el numero minimo es ahora %d\n",min);
        }
        
    }
    printf("el numero max es %d\n",max);
    printf("el numero min es %d\n",min);
}
