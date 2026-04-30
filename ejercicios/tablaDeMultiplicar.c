#include <stdio.h>

int main () {

int i,j;
int tablas = 10;
int multiplicar = 5;

for (i = 1; i <= tablas; ++i){
    for (j = 0;j <= multiplicar; j++){
        printf("%d x %d = %d \n",i,j, i * j);
    }
    printf("\n");
}



return 0;
}
