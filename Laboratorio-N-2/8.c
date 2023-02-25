#include <stdio.h>

/* Programa: NumerosRomanos.c */

int main()
{
    //bloque declarativa de variables
    int numero; 

    //Bloque de Instrucciones
    printf("\n-Imprimir Numero Romano -\n");
    
    printf("\nDigite un numero del 1 - 12: ");
    scanf("%i", &numero);

    switch(numero)
    {
        case 1:
            printf("\n-El numero %i en romanos seria: I.\n", numero);
            break;
        case 2: 
            printf("\n-El numero %i en romanos seria: II.\n", numero);
            break;
        case 3: 
            printf("\n-El numero %i en romanos seria: III.\n", numero);
            break;
        case 4: 
            printf("\n-El numero %i en romanos seria: IV.\n", numero);
            break;
        case 5: 
            printf("\n-El numero %i en romanos seria: V.\n", numero);
            break;
        case 6: 
            printf("\n-El numero %i en romanos seria: VI.\n", numero);
            break;
        case 7: 
            printf("\n-El numero %i en romanos seria: VII.\n", numero);
            break;
        case 8: 
            printf("\n-El numero %i en romanos seria: VIII.\n", numero);
            break;
        case 9: 
            printf("\n-El numero %i en romanos seria: IX.\n", numero);
            break;
        case 10: 
            printf("\n-El numero %i en romanos seria: X.\n", numero);
            break;
        case 11: 
            printf("\n-El numero %i en romanos seria: XI.\n", numero);
            break;
        case 12: 
            printf("\n-El numero %i en romanos seria: XII.\n", numero);
            break;
        default:
            printf("\n-No ha digitado un numero correcto, Vuelva a intentarlo.\n");
        
    }

    return 0;

}
