#include <stdio.h>

int main() {
    
    int ruedas;
    char inicialMarca;
    

    printf("Ingrese la cantidad de ruedas: ");
    scanf("%d", &ruedas);

    printf("Ingrese la inicial de la marca: ");
    scanf(" %c", &inicialMarca); // Siempre intentar dejar un espacio en el %c para que no ingrese el enter en vez de el caracter

    printf("Ruedas: %d\n", ruedas);
    printf("Inicial: %c\n", inicialMarca);






    return 0;
}