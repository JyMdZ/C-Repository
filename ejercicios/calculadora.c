#include <stdio.h>

int main() {
    /*
    int N;
    for (N = 0; N <= 20; N++) {
        if (N % 2 == 1){
            printf ("%d",N);
        printf("\n");
        }
    }
    */
    /*
    int n;
    int n_objetivo;
    printf("Ingresa un numero a la variable N \n");
    scanf("%d" , &n_objetivo);
    printf("El Objetivo a llegar es %d \n", n_objetivo);
    for (n = 1 ; n <= n_objetivo ; n++)
    {
        printf("%d \n",n);

        if (n == n_objetivo)
        {
            printf("Se llego al n_objetivo TARGET >%d< >>%d<<",n , n_objetivo);
        }

    }
    */
 /*
 int a;
 for (a = 1 ; a <= 10 ; a++){
    printf("%d al cuadrado es %d \n", a, a * a);
 }
 */

/*
 int confirmacion;
 int n1;
 int n2;
 int terminar = 0;

    do {

        printf ("<Quiere sumar algo?, 1 para continuar 0 para seguir> \n ");
        scanf ("%d", &confirmacion);

        if (confirmacion == 1) {
        printf("Continue sumando los dos numeros que te pide abajo! \n ");
        printf("Ingrese el primer numero a sumar con el segundo numero\n ");
        scanf ("%d", &n1);
        printf("su primer numero es %d\n ",n1);

        printf("Ingrese el segundo numero a sumar con el primer numero\n ");
        scanf ("%d", &n2);
        printf("Su segundo numero es %d\n ",n2);


        printf ("Suma >%d< \n" ,n1 + n2);
        }
    } while (confirmacion != terminar);
     printf ("el usuario ingreso 0 terminando...");
    */

/*

                                             PULIDO 
 int n_n1;
 int n_n2;
 int n_confirmacion = 0;

 do {
    printf("Quiere sumar algo?, Ingrese 1 para seguir / ingrese 0 para salir. \n");
    scanf("%d", &n_confirmacion);
    if ( n_confirmacion == 1)
    {
    printf("Ingrese el primer numero a sumar! : \n");
    scanf("%d", &n_n1);
    printf("Ingreso el numero > %d < \n", n_n1);

    printf("Ahora ingrese el segundo numero a sumar \n");
    scanf("%d", &n_n2);
    printf("Ingreso el numero > %d < \n", n_n2);

    printf("El resultado de %d + %d es = %d \n",n_n1 , n_n2, n_n1 + n_n2);
    }


 } while ( n_confirmacion != 0);
 {
    printf ("El usuario ingreso 0 terminando. \n");
 }
*/
/*
int i;
double num , suma = 0.0;
for(i = 1 ; i <= 4 ; ++i)
{
    printf("Ingrese el numero_%d ", i);
    while(getchar() != '\n');

    scanf("%lf", &num);
    if(num < 0.0 ){
        printf("El numero es negativo no esta permitido \n");
        break;
    }
    suma += num;
    printf("Va sumando %lf \n ", suma);
    while(getchar() != '\n');
}

*/


char calculadora;
double n1,n2;


printf("Ingrese una operacion de las 4 >> + - / * << ");
scanf(" %c", &calculadora);

 if  (calculadora != '+' &&
      calculadora != '-' &&
      calculadora != '/' &&
      calculadora != '*')
         {
         printf("Caracter invalido saliendo... \n");
         printf("\n");
         printf("\n");
         printf("       S A L I E N D O        \n");
         printf("\n");
         printf("\n");
         printf("Caracter invalido saliendo... \n");
         return 0;
         }


printf("Ingrese el primer numero \n");
printf("\n");
scanf("%lf", &n1);
printf("Ingreso el numero %.2lf \n", n1);
printf("\n");

printf("Ingrese el segundo numero \n");
printf("\n");
scanf("%lf", &n2);
printf("Ingreso el numero %.2lf \n", n2);
printf("\n");


switch (calculadora)
{
case '+':
    printf("La suma de %.2lf + %.2lf es = %.2lf",n1,n2, n1 + n2);
    printf("\n");
    break;
case '-':
    printf("La resta de %.2lf - %.2lf es = %.2lf",n1,n2, n1 - n2);
    printf("\n");
    break;
case '/':
    printf("La div de %.2lf / %.2lf es = %.2lf",n1,n2, n1 / n2);
    printf("\n");
    break;
case '*':
    printf("La multiplicacion de %.2lf * %.2lf es = %.2lf",n1,n2, n1 * n2);
    printf("\n");
    break;

default:

    break;
}

return 0;
}