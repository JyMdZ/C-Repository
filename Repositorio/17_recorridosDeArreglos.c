#include <stdio.h>

int main() {
    

    int num [10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    int suma = 0;



    for(int i = 0 ; i < 10; i++){
        printf("estabas en %d ahora estas en %d \n", i, num [i]);

        // suma = suma + num [i]; EN CASO DE QUERER SUMAR RETIRAR LOS COMENTARIOS

    }

    // printf("La suma es: %d\n", suma);



    int num [5] = {12, 7, 25, 18, 9};
    int mayor = num [0];

    for (int k = 1; k < 5; k = k + 1) {
        if (num [k] > mayor) {
            mayor = num [k];
        }
    }

    printf("El mayor valor es: %d\n", mayor);




    int numeros[5] = {10, 25, 30, 45, 50};
    int i;
    int buscado = 30;
    int encontrado = 0;

    for (i = 0; i < 5; i = i + 1) {
        if (numeros[i] == buscado) {
            encontrado = 1;
        }
    }

    if (encontrado == 1) {
        printf("El valor %d esta en el arreglo.\n", buscado);
    } else {
        printf("El valor %d no esta en el arreglo.\n", buscado);
    }





    int numeros[6] = {8, 14, 21, 14, 35, 42};
    int i;
    int buscado = 14;
    int posicion = -1;

    for (i = 0; i < 6; i = i + 1) {
        if (numeros[i] == buscado) {
            posicion = i;
            break;
        }
    }

    if (posicion != -1) {
        printf("El valor %d se encontro en la posicion %d.\n", buscado, posicion);
    } else {
        printf("El valor %d no se encontro.\n", buscado);
    }



    return 0;
}