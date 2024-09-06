int main()
{
    int legajo;
    int materia_recursar;
    int comision_anterior;
    char turno;
    char* materias [3] = {"Matematica","Programacion","Laboratorio"};
    printf("ingrese su legajo\n");
    scanf("%d", &legajo);
    while (legajo < 10000 || legajo > 99999)
    {
        printf("el valor ingresado es incorrecto\ningrese su legajo\n");
        scanf("%d", &legajo);
    }
    printf("materia a recursar : 1-Matematica 2-Programacion 3-Laboratorio\n");
    scanf("%d", &materia_recursar);
    while (materia_recursar !=1 || materia_recursar !=2 || materia_recursar !=3)
    {
        printf("el valor ingresado es incorrecto\n");
        printf("materia a recursar : 1-Matematica 2-Programacion 3-Laboratorio\n");
        scanf("%d", &materia_recursar);
    }
    
    
    printf("la materia a recursar es %s", materias[materia_recursar-1]);
   
   return 0;
}