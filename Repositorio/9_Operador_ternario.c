#include <stdio.h>

int main() {
    //condicion ? valor_si_verdadero : valor_si_falso
    int edad = 20;
    int esMayor = edad >= 18 ? 1 : 0; // el valor seria 1 ya que edad seria mayor a 18







    // EQUIVALENTE A IF ELSE PERO CON TERNARIO.

    int numero = 20;
    char* tipo = numero % 2 == 0 ? "par" : "impar";



    int numero = 20;
    char* tipo;

    if (numero % 2 == 0) {
    tipo = "par";
    } else {
    tipo = "impar";
    }




    int n1 = 10;
    int n2 = 20;
    int numero_menor = n1 < n2 ? n1 : n2;
    printf("El numero menor es %d " ,numero_menor);







    return 0;
}