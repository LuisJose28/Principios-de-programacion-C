#include <stdio.h>

/* Programa: Triangulos.c */

int main()
{

    //bloque declarativa de variables
    float ladoUno, ladoDos, ladoTres;

    //Bloque de Instrucciones
    printf("\nTipos de Triangulos segun sus lados\n");

    printf("\n- Ingrese el valor de 3 lados a continuación: -\n");
    printf("\nIngrese el primer lado: ");
    scanf("%f", &ladoUno);
    printf("\nIngrese el segundo lado: ");
    scanf("%f", &ladoDos);
    printf("\nIngrese el tercer lado: ");
    scanf("%f", &ladoTres);
    

    //Calcular el tipo de triangulo
    /*Equilátero: Todos sus lados son iguales.
    Isósceles: Dos de sus tres lados son de igual longitud.
    Escaleno: Todos sus lados son de diferente longitud.
    */

   if (ladoUno == ladoDos && ladoDos == ladoTres)
   {
        printf("\n-El triangulo es Equilatero, ya que todos sus lados son iguales.");
   }
   
    else if (ladoUno == ladoDos || ladoUno == ladoTres || ladoTres == ladoDos)
    {
       printf("\n-El triangulo es Isosceles, ya que 2 de sus 3 lados son iguales.");
    }
    else
    {
        if(ladoUno != ladoDos && ladoUno != ladoTres && ladoDos !=ladoTres)
        {
            printf("\n-El triangulo es Escaleno, ya que todos sus lados son diferentes.");
        }
    }

    return 0;
}
