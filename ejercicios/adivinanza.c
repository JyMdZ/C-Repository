#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, intento;

    srand(time(NULL));
    numero_secreto = rand() % 10 + 1;

    printf("Adivina el numero (entre 1 y 10)\n");

    do {
        printf("Ingresa tu numero: ");
        scanf("%d", &intento);

        if (intento > numero_secreto) {
            printf("Muy alto\n");
        } else if (intento < numero_secreto) {
            printf("Muy bajo\n");
        } else {
            printf("Correcto! Adivinaste el numero\n");
        }
    } while (intento != numero_secreto);

    return 0;
}
