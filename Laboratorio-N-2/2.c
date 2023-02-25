#include <stdio.h>

/* Programa: Promedio.c */


int main()
{
    //bloque declarativa de variables
    float notaUno,notaDos,notaTres,notaCuatro,notaCinco;
    float notaFinal; 
    

    //Bloque de Instrucciones
    printf("\nIntroduzca la primera calificacion: ");
    scanf("%f", &notaUno);
    printf("Introduzca la segunda calificacion: ");
    scanf("%f", &notaDos);
    printf("Introduzca la tercera calificacion: ");
    scanf("%f", &notaTres);
    printf("Introduzca la cuarta calificacion: ");
    scanf("%f", &notaCuatro);
    printf("Introduzca la quinta calificacion: ");
    scanf("%f", &notaCinco);

    //Se calcula el promedio final
    notaFinal = (notaUno + notaDos + notaTres + notaCuatro + notaCinco) / 5;

    //Se calcula la equivalencia en notas
    if (notaFinal >= 91)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una A", notaFinal);
    }
    else if(notaFinal >=81 && notaFinal <= 90)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una B", notaFinal);
    }
    else if(notaFinal >= 71 && notaFinal <= 80)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una C", notaFinal);
    }
    else if(notaFinal >= 61 && notaFinal <= 70)
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una D", notaFinal);
    }
    else
    {
        printf("\n-Su promedio final es: %.2f y es equivalente a una F", notaFinal);
    }

    return 0;
}
