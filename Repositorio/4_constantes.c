#include <stdio.h>

int main() {
    const int dias_semana = 7; // un dato que es constante osea no puede cambiar en ningun momento despues de asignarle un valor o definirlo.
    int dia_actual;

    printf("La semana tiene %d dias, lunes martes miercoles jueves viernes sabado domingo\n", dias_semana);
    printf("Ingresa del 1 al 7 para ver en que dia estas\n ");
    scanf("%d",&dia_actual);
    printf("Ingresaste el dia %d \n ",dia_actual);

    switch(dia_actual){
        case 1:
            printf("Es lunes");
        break;

        case 2:
            printf("Es martes");
        break;

        case 3:
            printf("Es miercoles");
        break;

        case 4:
            printf("Es jueves");
        break;

        case 5:
            printf("Es viernes");
        break;

        case 6:
            printf("Es sabado");
        break;

        case 7:
            printf("Es domingo");
        break;


        default:
        printf("No es un dia valido");
        

    }
    return 0;
}