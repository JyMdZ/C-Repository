#include <stdio.h>

int main () {
  int a, b, c, d;

  printf("Ingrese el numero A \n");
  scanf("%d", &a);
  printf("Ingreso el numero %d \n", a);

  printf("Ingrese el numero B \n");
  scanf("%d", &b);
  printf("Ingreso el numero %d \n", b);

  printf("Ingrese el numero C \n");
  scanf("%d", &c);
  printf("Ingreso el numero %d \n", c);


  printf("ingrese el numero D \n");
  scanf("%d", &d);
  printf("Ingreso el numero %d \n", d);

  printf("la div es: %d \n",a / b);
  printf("la multi es: %d \n",c * d);
  printf("la suma es: %d \n",a + b);
  printf("la resta es: %d \n",c - d);
}
