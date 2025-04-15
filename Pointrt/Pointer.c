#include <stdio.h>

int main() {
  int x = 10;

  // Pointer declaration and initialization
  int * p = & x;

  // Printing the current value
  printf("Value of x = %d\n", * p);

  // Changing the value
  * p = 20;

  // Printing the updated value
  printf("Value of x = %d\n", * p);

  return 0;
}