#include <stdio.h>

/* Programa: CostoDeProductos.c */
/* Luis Espinosa / 8-992-2338 */

int main()
{

    //bloque declarativa de constantes
    #define PESO_IDEAL 23

    //bloque declarativa de variables
    int contador = 0; //Cantidad de equipajes pesados
    int contadorDos = 0; // Cantidad de equipaje que sobrepesa los 23 kg
    int contadorTotal; //Suma de ambos contadores



    float peso; // varibale que almacenara todos los pesos
    float pesoUno; // peso total de todos los equipajes 
    float pesoDos; // peso total de todos los equipajes en sobrepeso
    float pesoTotal; //Suma de todos los pesos

    float luisEspinosa; // promedio de todos los pesos
    float sobrePeso; // Cantidad total en KG que sobrepesa los 23 kilogramos 


    //Bloque de Instrucciones
    printf("\n- Bienvenidos al Aeropuerto AnkerField -\n");
    printf("\n- Registro de Peso de Equipaje -\n");
    printf("Si desea terminar, presione 0\n");

    do{
        
        printf("\nIngrese el peso de sus equipajes: ");
        scanf("%f", &peso);

        if(peso != 0 && peso <= 23)
        {
            contador ++;
            pesoUno = pesoUno + peso;

        }
       else if(peso != 0 && peso > 23)
        {
            contadorDos ++;
            pesoDos = pesoDos + peso;

        }



    }while (peso != 0);
        contadorTotal = contador + contadorDos;
        pesoTotal = pesoUno + pesoDos;
        luisEspinosa = pesoTotal / contadorTotal;
        sobrePeso = pesoDos - (PESO_IDEAL * contadorDos);

        printf("\n* Resultados * \n");
        printf("\n-Cantidad de equipajes pesados: %d\n", contadorTotal);
        printf("\n-El total de todos los equipajes fue  de: %.2f KG\n", pesoTotal);
        printf("\n-El promedio de los equipajes fue de: %.2f KG\n", luisEspinosa);
        printf("\n-Cantidad de equipajes que sobrepasa los 23 KG fue de: %d\n", contadorDos);
        printf("\n-El total de KG que sobrepasaron fue de: %.2f KG\n",sobrePeso );

return 0;

}
