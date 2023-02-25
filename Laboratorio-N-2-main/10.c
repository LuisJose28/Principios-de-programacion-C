#include <stdio.h>

/* Programa: VuelosInternacionales.c */

int main()
{
    //bloque declarativa de variables
    int moneda, bucle;//la variable 'bucle' sera la variable que utilizaremos para la condicion del ciclo Do - while
    float cantidad, resultado; 

    //Bloque de Instrucciones
    printf("\n- Bienvenidos al Conversor de Divisas -\n");
    
    do
    {
        printf("\n-Digite la moneda que desea convertir : ");
        scanf("%i", &moneda);
        printf("\n-Digite la cantidad que desea convertir a Dolares: ");
        scanf("%f", &cantidad);

        switch(moneda)
        {
                case 1:
                        printf("\n-Conversion de BOLIVAR VENEZOLANO a DOLARES: ");
                        resultado = cantidad / 32738.48;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;
                case 2: 
                        printf("\n-Conversion de DOLAR CANADIENSE a DOLARES AMERICANOS: ");
                        resultado = cantidad / 1.35;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;

                case 3: 
                        printf("\n-Conversion de lIBRA a DOLARES: ");
                        resultado = cantidad / 0.78;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;

                case 4: 
                        printf("\n-Conversion de PESO COLOMBIANO a DOLARES: ");
                        resultado = cantidad / 3777.51;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;

                case 5: 
                        printf("\n-Conversion de PESO MEXICANO a DOLARES: ");
                        resultado = cantidad / 21.98;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;
                
                case 6: 
                        printf("\n-Conversion de YEN a DOLARES: ");
                        resultado = cantidad / 107.30;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;

                case 7: 
                        printf("\n-Conversion de YUAN a DOLARES: ");
                        resultado = cantidad / 7.07;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;

                case 8: 
                        printf("\n-Conversion de EURO a DOLARES: ");
                        resultado = cantidad / 0.88;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;

                case 9: 
                        printf("\n-Conversion de REAL BRASILEÑO a DOLARES: ");
                        resultado = cantidad / 5.06;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;

                case 10: 
                        printf("\n-Conversion de PESO ARGENTINO a DOLARES: ");
                        resultado = cantidad / 69.31;
                        printf("\n-La Conversion a Dolares es igual a: %.2f \n", resultado);
                        break;
                
                default:
                        printf("\n-No ha digitado una moneda correcta, Vuelva a intentarlo.\n");  
                        
        }
        printf("\n¿Desea realizar otro cambio de moneda?\n");
        printf("Presione 1 para SI\nPresione 2 para NO\nOpcion:");
        scanf("%i", &bucle);

    } while (bucle == 1);
    

return 0;

}
