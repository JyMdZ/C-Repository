#include <stdio.h>

int main() {
    int num[100];
    int j;
    int sizeA = 0;

    printf("Ingrese el tamaño del arreglo num entre 1 y 100\n");
    scanf("%d", &sizeA);

    if (sizeA >= 0 && sizeA < 100){
        printf("Se determino el tamaño del arreglo en %d \n", sizeA);
    }else {
        printf("Ingreso un valor negativo | 0 | valor encima de 100 saliendo... \n");
        return 1;
    }


    for(j = 0; j < sizeA; j++ ){
        printf("A continuacion ingrese un numero > \n ");
        scanf("%d", &num[j]);
        printf("Va por el array num[%d] de %d\n ",j ,sizeA );
    }

    printf("Se guardaron los numeros ingresados en las siguientes posiciones \n");

    for(j = 0; j < sizeA; j++ ){ 
        printf("En el array = num[%d] se almaceno el numero = %d \n",j ,num[j]);
        
    }

    return 0;
}