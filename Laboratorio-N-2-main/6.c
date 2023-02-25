#include <stdio.h>

/* Programa: Mes.c */

int main()
{
    //bloque declarativa de variables
    int mes; 

    //Bloque de Instrucciones
    printf("\n-Imprimir Mes Indicado -\n");
    
    printf("\nDigite un numero del 1 - 12: ");
    scanf("%i", &mes);

    switch(mes)
    {
        case 1:
            printf("\n-El numero %i corresponde a Enero.", mes);
            break;
        case 2: 
            printf("\n-El numero %i corresponde a Febrero.", mes);
            break;
        case 3: 
            printf("\n-El numero %i corresponde a Marzo.", mes);
            break;
        case 4: 
            printf("\n-El numero %i corresponde a Abril.", mes);
            break;
        case 5: 
            printf("\n-El numero %i corresponde a Mayo.", mes);
            break;
        case 6: 
            printf("\n-El numero %i corresponde a Junio.", mes);
            break;
        case 7: 
            printf("\n-El numero %i corresponde a Julio.", mes);
            break;
        case 8: 
            printf("\n-El numero %i corresponde a Agosto.", mes);
            break;
        case 9: 
            printf("\n-El numero %i corresponde a Septiembre.", mes);
            break;
        case 10: 
            printf("\n-El numero %i corresponde a Octubre.", mes);
            break;
        case 11: 
            printf("\n-El numero %i corresponde a Noviembre.", mes);
            break;
        case 12: 
            printf("\n-El numero %i corresponde a Diciembre.", mes);
            break;
        default:
            printf("\n-No ha digitado un numero correcto, Vuelva a intentarlo.\n");
        
    }

    return 0;
}
