#include <stdio.h>

int main() {
    
    int suma = 5 + 5;
    int resta = 5 - 5;
    int multiplicaciones = 5 * 5;    
    int division = 10 / 2;
    int resto = 10 % 3; // 3 3 3 sobra 1 , aca resto vale 1 porque es la cantidad que sobra de 10.


    int Multiplica_Primero_Luego_Suma = 5 + 5 * 2; // aca primero multiplica 5 x 2 y luego suma 5 daria 15. 
    int suma_Y_despues_Multiplicar = (5 + 5) * 2; // aca Suma lo que se prioriza con parentesis y luego multiplica el resultado de la suma x2 daria 20


    //OPERADORES DE ASIGNACION COMBINADOS 

    // +=   
    int suma = 0;
    suma += 5;
    //equivale a 
    suma = suma + 5;


    // -=
    int resta = 0;
    resta -= 5;
    //equivale a 
    resta = resta - 5;



    // *=
    int multiplica = 0;
    multiplica *= 5;
    //equivale a 
    multiplica = multiplica * 5;


    // /=
    int divide = 0;
    divide /= 5;
    //equivale a 
    divide = divide / 5;


    // %=
    int resto = 0;
    resto %= 3;
    //equivale a 
    resto = resto % 3;


    //Operadores relacionales


    // == igual que         -----
    // != distinto de       -----
    // > mayor que          -----  ACA NO MOSTRARIA EL NUMERO LIMITE CON EL QUE SE COMPARA. Osea en un      for(i = 10 ; i > 0 ; --i);  aca i llegaria a 1 y pararia de decrementar porque sino seria igual 0 y solo se pide mientras sea mayor.
    // < menor que          -----  ACA NO MOSTRARIA EL NUMERO LIMITE CON EL QUE SE COMPARA. Osea en un      for(i = 0 ; i < 10 ; ++i);  aca i llegaria a 9 y pararia de incrementar porque sino seria igual 10 y solo se pide mientras sea menor.
    // >= mayor o igual que -----  ACA SI PUEDE IGUALAR EL NUMERO CON EL QUE SE COMPARA. Osea en un         for(i = 10 ; i >= 0 ; --i); aca i llegaria a 0 y pararia de decrementar porque es igual a 0.
    // <= menor o igual que -----  ACA SI PUEDE IGUALAR EL NUMERO CON EL QUE SE COMPARA. Osea en un         for(i = 0 ; i <= 10 ; ++i); aca i llegaria a 10 y pararia de incrementar porque es igual a 10.
    




    // OPERADORES LOGICOS

    // && SIGNIFICA "Y o AND"
    // edad >= 18 && edad <= 65 ---- Se usa cuando queres que dos condiciones sean verdaderas al mismo tiempo


    // || SIGNIFICA "O o OR" 
    // edad > 18 || edad < 65   ---- se usa cuando queres que se cumpla una u otra condicion 


    // ! SIGNIFICA "NEGACION o NO"
    // !(edad == 18)            ---- se usa cuando queres negar una condicion



    // EJEMPLOS EN ESTRUCTURAS


     
    int edad = 20;
    if (edad <= 18 && edad >= 65){
        printf("edad laboral.\n");
    } else if (edad > 18 || edad < 65){
        printf("Fuera de edad laboral.");
    }




    for(int edad = 15; edad <= 70; edad++){
        if (edad >= 18 && edad <= 65){    // Empieza en 15. En cada vuelta dentro del IF que esta dentro del FOR evalúa si edad está entre 18 y 65 con ese valor actual. Después, incrementa en 1.
            printf("edad laboral.");
        }
    }





    int edad = 10;
    do{
        printf("edad %d",edad);
        edad++;

    }while (!(edad >= 18 && edad <= 65)); // el unico problema de esto es que se torna en un bucle infinito si se introduce mas de 65 en la edad. Es para teoria ya que tiene solucion dentro de todo simple








    int edad = 30; // VALIDA
    int edad = 66; // NO VALIDA
    int edad = 17; // NO VALIDA
 switch (edad >= 18 && edad <= 65) {
    case 1:
        printf("Edad válida\n");
        break;
    case 0:
        printf("Edad no válida\n");
        break;
    }



    return 0;
}