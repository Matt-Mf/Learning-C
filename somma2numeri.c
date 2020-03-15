
// Somma di due numeri interi tramite funzione

#include <stdio.h>

 int numero1,numero2;
 int res;
 int somma(int numero1, int numero2);

int main(void) {
  printf("Programma Somma, Prego inserire addendi: \n");
   scanf("%d", &numero1);
   scanf("%d", &numero2);
   res = somma(numero1, numero2);

  printf("Somma = ");
  printf("%d", res);

  return (0);
}

// Funzione di somma
int somma(int numero1, int numero2) {
  res = numero1+numero2;
  return (res);
}