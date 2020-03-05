#include <stdio.h>

// stampa tabella Fahrenheit-Celsius 

int main () {

  float fahr, celsius;
  int lower, upper, step;
  char fahr_label = 'F';
  char celsius_label = 'C';
  

  lower = -25; // limite più basso tabella
  upper = 650; // limite alto *
  step = 20;   // dimensione step

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %c %6.1f %c\n", fahr, fahr_label, celsius, celsius_label);
    fahr = fahr + step;
  }
}