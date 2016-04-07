#include <stdio.h>
#include <stdlib.h>
#include "LibreriaErcegovich.h"
int validarRango(int x, int inf, int sup);//Validacion para el menu.
float sumaDeDosEnteros (float x, float y);//Suma - 3ra opcion.
float restaDeDosEnteros (float x, float y);//Resta - 4ta opcion.
float divicionDeDosEnteros (float x, float y);//Divicion - 5ta opcion.
float multiplicacionDeDosEnteros (float x, float y);//Multiplicacion - 6ta opcion.
long factorialDeUnEntero (float x);//Factorial - 7ma opcion.
int main()
{
   int opcion;
   float numero1=0;
   float numero2=0;

   do
   {
       system("cls");
       printf("Calculadora\n\n");
       printf("1_Ingrese primer numero (A= %.2f)\n", numero1);
       printf("2_Ingrese segundo numero (B= %.2f)\n", numero2);
       printf("3_Suma (%.2f+%.2f)\n", numero1, numero2);
       printf("4_Resta (%.2f-%.2f)\n", numero1, numero2);
       printf("5_Dividir (%.2f/%.2f)\n", numero1, numero2);
       printf("6_Multiplicar (%.2f*%.2f)\n", numero1, numero2);
       printf("7_Factorial\n");
       printf("8_Calcular todas las operaciones\n");
       printf("9_Salir\n");
       printf("\nIngrese una opcion ");
       scanf("%d", &opcion);
            while(!validarRango(opcion,1,9))
            {
                printf("\nError. Reingrese un valor entre 1 y 9: ");
                scanf("%d", &opcion);
                system("pause");
            }
            switch (opcion)
            {
                case 1: //Primer Numero.
                     printf("\nIngrese el numero que desee: ");
                     scanf("%f", &numero1);
                     printf("\n\n");
                     system("pause");
                     break;
                case 2: //Segundo Numero.
                     printf("\nIngrese el numero que desee: ");
                     scanf("%f", &numero2);
                     printf("\n\n");
                     system("pause");
                     break;
                case 3: //Suma.
                     printf("\nEl resultado de la suma es: %.2f \n\n", sumaDeDosEnteros (numero1,numero2));
                     system("pause");
                     break;
                case 4: //Resta.
                     printf("\nEl resultado de la resta es: %.2f \n\n", restaDeDosEnteros (numero1,numero2));
                     system("pause");
                     break;
                 case 5: //Dividir.
                     if (numero2==0)
                     {
                     printf("\nEl resultado de la divicion es: %.2f \n\n", divicionDeDosEnteros (numero1,numero2));
                     }
                     else
                     printf("\nError. Elija un numero diferente a 0.\n\n");
                     system("pause");
                     break;
                 case 6: //Multiplicar.
                     printf("\nEl resultado de la multiplicacion es: %.2f \n\n", multiplicacionDeDosEnteros (numero1,numero2));
                     system("pause");
                     break;
                 case 7:
                     printf("\nEl factorial es: %li \n\n", factorialDeUnEntero (numero1));
                     system("pause");
                     break;
                 case 8: //Todas las opciones.
                     printf("\nEl resultado de la suma es: %.2f \n\n", sumaDeDosEnteros (numero1,numero2));
                     printf("\nEl resultado de la resta es: %.2f \n\n", restaDeDosEnteros (numero1,numero2));
                     printf("\nEl resultado de la divicion es: %.2f \n\n", divicionDeDosEnteros (numero1,numero2));
                     printf("\nEl resultado de la multiplicacion es: %.2f \n\n", multiplicacionDeDosEnteros (numero1,numero2));
                     printf("\nEl factorial es: %li \n\n", factorialDeUnEntero (numero1));
                     system("pause");
                     break;

            }

   }while(opcion!=9);
    return 0;
}
