#include <stdio.h>

/* Programa: OperacionMatematica.c */

int main()
{
    //bloque declarativa de variables
    int numeroUno, numeroDos, operacion, resultado; 

    //Bloque de Instrucciones
    printf("\n- Operaciones Matematicas: -\n");

    printf("\n-Ingrese su primer valor: ");
    scanf("%i", &numeroUno);
    printf("-Ingrese su segundo valor: ");
    scanf("%i", &numeroDos);

    printf("\n- Selecione la operacion matematica a realizar: -\n");
    
    printf("\n-Escriba 1 para Suma. 2 para Resta. 3 para Multiplicacion. 4 para Division :  ");
    scanf("%i", &operacion);


    switch(operacion)
    {
        case 1:
            printf("\n-Has seleccionado la Suma: \n");
            resultado = numeroUno + numeroDos;
            printf("%i + %i es igual a %i \n", numeroUno, numeroDos, resultado);
            break;
        case 2: 
            printf("\n-Has seleccionado la Resta: \n");
            resultado = numeroUno - numeroDos;
            printf("%i - %i es igual a %i \n", numeroUno, numeroDos, resultado);
            break;
        case 3: 
            printf("\n-Has seleccionado la Multiplicacion: \n");
            resultado = numeroUno * numeroDos;
            printf("%i X %i es igual a %i \n", numeroUno, numeroDos, resultado);
            break;
        case 4: 
            printf("\n-Has seleccionado la Division: \n");
            resultado = numeroUno / numeroDos;
            printf("%i / %i es igual a %i \n", numeroUno, numeroDos, resultado);
            break;
        
        default:
            printf("\n-No ha digitado un numero correcto, Vuelva a intentarlo.\n");
        
    }

    return 0;

}
