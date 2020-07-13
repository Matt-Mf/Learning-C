
// Stampa tabella Celsius-Fahr con ciclo FOR e utilizzo di Macro DEFINE

#include <stdio.h>

#define LOWLIM    0
#define UPLIM     300  
#define PRECISION 20

int main() {

  int cels;

   char fahr_label = 'F';
   char celsius_label = 'C';
  
  
  for (cels= UPLIM; cels >= LOWLIM; cels = cels - PRECISION)
  printf("%3d %c %3.0f %c \n", cels, celsius_label, (cels / (5.0/9.0) + 32.0), fahr_label );
} 
