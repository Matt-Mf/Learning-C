
// Verify that the expression getchar() != EOF is 0 or 1.

#include <stdio.h>

int c;

int main() 
{
    if (( c = getchar() != EOF) != 1) 
      { printf(" L'espressione vale 0\n"); }

    else {
      printf("L'espressione vale 1\n"); }
}
