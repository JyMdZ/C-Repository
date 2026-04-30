#include <stdio.h>

int main() {
    float n1_dato = 0;
    float n2_dato = 0;
    float n3_promedio = 0;

        printf("Ingrese el primer dato : \n");
        scanf("%f", &n1_dato);
        printf("Ingreso >> %f <<\n", n1_dato);



        printf("Ingrese el segundo dato : \n");
        scanf("%f", &n2_dato);
        printf("Ingreso >> %f <<\n", n2_dato);


        n3_promedio = n1_dato + n2_dato;

        printf("El promedio de los datos ingresados es >>> %f <<<", n3_promedio / 2);


    return 0;
}