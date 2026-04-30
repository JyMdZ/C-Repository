#include <stdio.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("matriz[0][0] = %d\n", matriz[0][0]);
    printf("matriz[0][2] = %d\n", matriz[0][2]);
    printf("matriz[1][1] = %d\n", matriz[1][1]);
    printf("matriz[1][2] = %d\n", matriz[1][2]);




    // Modificar el valor de una matriz
    int tablero[2][2] = {
        {1, 0},
        {0, 1}
    };

    tablero[0][1] = 9;

    printf("Nuevo valor: %d\n", tablero[0][1]);



    return 0;
}