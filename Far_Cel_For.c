
// Stampa tabella Fahrenheit-Celsius con ciclo FOR

#include <stdio.h>

int main() {
  
    int fahr;

    for (fahr = 0; // Inizializzazione
    
        fahr <=300; // Test: Valuto la condizione. Se vero, eseguo. Se falso esco.
        
        fahr= fahr + 20) // EXE: Corpo del ciclo 

      printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
