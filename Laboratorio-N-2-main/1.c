#include <stdio.h>

/* Programa: MaximoyMinimo.c */

int main()
{

    //bloque declarativa de variables
    float numeroUno, numeroDos, numeroTres;
    float maximo, minimo; 

    //Bloque de Instrucciones
    printf("\n- Ingrese 3 valores a continuación: -\n");
    printf("\nIngrese el primer valor: ");
    scanf("%f", &numeroUno);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &numeroDos);
    printf("Ingrese el tercer valor: ");
    scanf("%f", &numeroTres);

    //Calcular numero maximo
    if (numeroUno > numeroDos && numeroUno > numeroTres)
    {
        printf("\n-El numero maximo es: %.1f", numeroUno);
    }
    else if (numeroDos > numeroTres)
    {
        printf("\n-El numero maximo es: %.1f", numeroDos);
    }
    else
    {
        printf("\n-El numero maximo es: %.1f", numeroTres);
    }
    
    //Calcular numero minimo
    if (numeroUno < numeroDos && numeroUno < numeroTres)
    {
        printf("\n-El numero minimo es: %.1f", numeroUno);
    }
    else if (numeroDos < numeroTres)
    {
        printf("\n-El numero minimo es: %.1f\n", numeroDos);
    }
    else
    {
        printf("\n-El numero minimo es: %.1f", numeroTres);
    }

    return 0;

}
