
// Stampa tabella Celsius-Fahr con ciclo FOR

#include <stdio.h>

int main() {

  int cels;

   char fahr_label = 'F';
   char celsius_label = 'C';
  
  
  for (cels=300; cels > -1; cels = cels - 20)
  printf("%3d %c %3.0f %c \n", cels, celsius_label, (cels / (5.0/9.0) + 32.0), fahr_label );
}