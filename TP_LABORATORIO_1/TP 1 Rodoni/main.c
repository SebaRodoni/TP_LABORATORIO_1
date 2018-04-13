#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int opcion;
    float a, b, resultado;
    do{                           system("cls");
        printf("\t----------------_Calculadora_---------------\n");
        printf("\t--------------------------------------------\n");
        printf("\t|  [1]  Suma                               |\n");
        printf("\t|  [2]  Resta                              |\n");
        printf("\t|  [3]  Division                           |\n");
        printf("\t|  [4]  Multiplicacion                     |\n");
        printf("\t|  [5]  Todas las operaciones              |\n");
        printf("\t|  [6]  Factorial                          |\n");
        printf("\t|  [7]  Salir                              |\n");
        printf("\t--------------------------------------------\n");
        printf("\t-----------SELECCIONE UNA OPCION------------\n");
        scanf("%d",&opcion);

        if ((opcion>=1) && (opcion<=6))
        {
                printf("\nIngrese el primer operando:\n");
                scanf("%f",&a);
                printf("\nIngrese el segundo operando:\n");
                scanf("%f",&b);
        switch(opcion)
        {
            case 1:
                printf("La Suma es: %.2f ", resultado = sumar (a , b));
                break;
            case 2:
                printf("La Resta es: %.2f ", resultado = restar (a , b));
                break;
            case 3:
                resultado = dividir (a , b);
                if(resultado !=0)
                {
                 printf("La Division es: %.2f ", resultado);
                }
                else
                {
                    printf("¡¡Error!! no se puede dividir por cero, reintente... ");
            }
                break;
            case 4:
                printf("La Multiplicacion es: %.2f ", resultado = multiplicar (a , b));
                break;
            case 6:
                resultado = factorial (a);
                if(resultado!=0)
                {
                    printf("El Factorial es: %.2f", resultado);
                }
                else
                {
                    printf("¡¡Error!! no existe factorial de un numero negativo, reintente...");
                }
            break;
            case 5:
                printf("\nLa Suma es: %.2f ",           resultado = sumar (a , b));
                printf("\nLa Resta es: %.2f ",          resultado = restar(a , b));
                printf("\nLa Division es: %.2f ",       resultado = dividir (a , b));
                printf("\nLa Multiplicacion es: %.2f ", resultado = multiplicar (a , b));
                printf("\nEl Factorial es: %.2f",         resultado = factorial (a));

        break;
        default:{}
        break;
        }}
    getch();
    }while(opcion!=7);
    printf("¡Gracias por usar la calculadora Rhodony!");
    return 0;
}

