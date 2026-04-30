#include <stdio.h>
int main () {
int ram1, ram2, ram3;
int rapida;
printf("Ingrese la velocidad de la primera ram ");
scanf("%d", &ram1);
printf("Ingrese la velocidad de la segunda ram ");
scanf("%d", &ram2);
printf("Ingrese la velocidad de la tercera ram ");
scanf("%d", &ram3);

if (ram1 >= ram2){
    if (ram1 >= ram3){
        rapida = ram1;
    }else{
        rapida = ram3;
    }
} else {
    if (ram2 >= ram3){
        rapida = ram2;
    }else{
        rapida = ram3;
    }
} printf("La mas rapida es la ram de: %d", rapida);
return 0;
}
