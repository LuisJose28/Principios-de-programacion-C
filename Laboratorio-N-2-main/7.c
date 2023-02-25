#include <stdio.h>

/* Programa: NumeroIngles.c */

int main()
{
    //bloque declarativa de variables
    int numero; 

    //Bloque de Instrucciones
    printf("\n-Imprimir Numero en Ingles -\n");
    
    printf("\nDigite un numero del 1 - 10: ");
    scanf("%i", &numero);

    switch(numero)
    {
        case 1:
            printf("\n-El numero %i seria: One.\n", numero);
            break;
        case 2: 
            printf("\n-El numero %i seria: Two.\n", numero);
            break;
        case 3: 
            printf("\n-El numero %i seria: Three.\n", numero);
            break;
        case 4: 
            printf("\n-El numero %i seria: Four.\n", numero);
            break;
        case 5: 
            printf("\n-El numero %i seria: Five.\n", numero);
            break;
        case 6: 
            printf("\n-El numero %i seria: Six.\n", numero);
            break;
        case 7: 
            printf("\n-El numero %i seria: Seven.\n", numero);
            break;
        case 8: 
            printf("\n-El numero %i seria: Eight.\n", numero);
            break;
        case 9: 
            printf("\n-El numero %i seria: Nine.\n", numero);
            break;
        case 10: 
            printf("\n-El numero %i seria: Ten.\n", numero);
            break;
        default:
            printf("\n-No ha digitado un numero correcto, Vuelva a intentarlo.\n");
        
    }

    return 0;

}
