
// Stampa tabella Celsius-Fahrenheit 

#include <stdio.h>

int main () {

  float fahr, celsius;
  int lower, upper, step;
  char fahr_label = 'F';
  char celsius_label = 'C';
  

  lower = -20; // limite più basso tabella
  upper = 300; // limite alto *
  step = 20;   // dimensione step

  celsius = lower;
  while (celsius <= upper) {
    fahr =  (celsius / (5.0/9.0) + 32.0) ;
    printf("%3.0f %c %6.1f %c\n", celsius, celsius_label, fahr, fahr_label);
    celsius = celsius + step;
  }
}