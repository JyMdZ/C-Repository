#include <stdio.h>
int main () {
   int talla;
   printf("Que talla de zapato eres? ");
   scanf("%d", &talla);

   if (talla == 44 ){
        printf("Tome la talla 44");
   }
   else if (talla > 44 ){
        printf("No tenemos talla mas grande que 44 ");
   }
    else if (talla == 42){
        printf("Tome talla 42 es el ultimo que nos queda ");
    }
    else if (talla == 40){
        printf("Tome talla 40 pero no tenemos menos de eso! ");
    }
    else {
        printf("No tenemos menos de 40");
    }
return 0;
}
