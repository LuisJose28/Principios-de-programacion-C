#include <stdio.h>

/* Programa: Productos.c */

int main()
{
    
    //bloque declarativa de constante
    #define REBAJA 0.20
    #define ITBMS 0.07

    //bloque declarativa de variables
    float precioUno, precioDos, precioTres;
    float sumaTotal; // sumatorio de los 3 productos
    float descuento; // valor del descuento a realizar
    float precioTotal; //calculo del precio de los 3 productos restado por el descuento
    float impuesto; // resultado del calculo del 7%
    float resultado; // precio final a pagar


    //Bloque de Instrucciones
    printf("\n- Ingrese 3 precios a continuación: -\n");
    printf("\nIngrese el primer precio: ");
    scanf("%f", &precioUno);
    printf("Ingrese el segundo precio: ");
    scanf("%f", &precioDos);
    printf("Ingrese el tercer precio: ");
    scanf("%f", &precioTres);
    
    //Suma de los 3 (tres)precio
    sumaTotal = precioUno + precioDos + precioTres;

    if (sumaTotal >= 100)
    {
        descuento = sumaTotal * REBAJA;
        precioTotal = (sumaTotal - descuento);
        impuesto = precioTotal * ITBMS;
        resultado = precioTotal + impuesto;
        
        printf("\nLa suma total de los 3 productos es: %.2f$\n", sumaTotal);
        printf("\nEl descuento aplicable es de: %.2f$\n", descuento);
        printf("\nEl precio con el descuento por superar los 100$ dolares quedaria en: %.2f$\n", precioTotal);
        printf("\nEl ITBMS es de: %.2f$\n", impuesto);
        printf("\nEl total final a pagar es: %.2f$\n", resultado);
    }

    else
    {
        impuesto = sumaTotal * ITBMS;
        resultado = sumaTotal + impuesto;

        printf("\nLa suma total de los 3 productos es: %.2f$\n", sumaTotal);
        printf("\nEl ITBMS es de: %.2f$\n", impuesto);
        printf("\nEl total final a pagar es: %.2f$\n", resultado);

    }

    return 0;

}
