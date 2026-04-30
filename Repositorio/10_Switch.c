#include <stdio.h>

int main() {
    
    const int semana = 7;
    int dia = 3;

    printf("La semana tiene %d dias \n");



    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;

        case 4:
            printf("Jueves\n");
            break;

        case 5:
            printf("viernes\n");
            break;

        case 6:
            printf("sabado\n");
            break;
        case 7:
            printf("domingo\n");
            break;
        default:
            printf("Valor no válido\n");
    }

    return 0;
}