#include <stdio.h>

/* Programa: Hermanos.c */

int main()
{

    //bloque declarativa de variables
    int edadUno, edadDos, edadTotal;

    //Bloque de Instrucciones
    printf("\n- Ingrese 2 edades a continuación: -\n");
    printf("\nIngrese la primera edad: ");
    scanf("%d", &edadUno);
    printf("\nIngrese la segunda edad: ");
    scanf("%d", &edadDos);
    

    //Calcular edad mayor
    if(edadUno > edadDos)
    {
        edadTotal = edadUno - edadDos;
        printf("\n-La edad del mayor es: %d. Y se llevan %d años de diferencia.", edadUno, edadTotal);
    }
    else if(edadDos > edadUno)
    {
        edadTotal = edadDos - edadUno;
        printf("\n-La edad del mayor es: %d. Y se llevan %d años de diferencia.",edadDos, edadTotal);
    }
    else
    {
        printf("\n-Los hermanos tienen la misma edad.");
    }
    
    return 0;

}
