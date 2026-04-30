#include <stdio.h>

int main() {
     // int notas[5]; el entero notas no va a representarse del 1 al 5 o 0 al 5, Se va a mostrar 5 variables de notas osea >> nota_0 nota_1 nota_2 nota_3 nota_4 <<
                                                                                                                          //    0     1     2       3       4

     
     int notas[5] = {1, 2, 3, 4, 5}; //  tambien es valido y mas simple.

     // UN ARREGLO PUEDE SER DE CUALQUIER TIPO SIEMPRE QUE SEAN DEL MISMO TIPO.


            printf("ASIGNADO %d\n");
            printf("Primer valor: %d\n", notas[0]);
            printf("valor intermedio: %d\n", notas[2]);
            printf("Ultimo valor: %d\n", notas[4]);


        notas[0] = 5; // tambien se puede reasignar los arreglos de forma estatica definiendolas o con un SCANF
        notas[1] = 10;
        notas[2] = 15;
        notas[3] = 20;
        notas[4] = 25;

            printf("RE-ASIGNADO %d\n");
            printf("Primer valor: %d\n", notas[0]);
            printf("valor intermedio: %d\n", notas[2]);
            printf("Ultimo valor: %d\n", notas[4]);

    




    return 0;
}