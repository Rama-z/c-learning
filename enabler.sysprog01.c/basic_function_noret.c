#include <stdio.h>

/* Teaching notes:
 * Demonstrating that a function can return a value and not return a value
 * Demonstraitng that a function can call another function
 */

int sum(int a, int b);
void print_int(int a);


int main(void) {
  int a = 5;
  int c = 24;

  print_int(sum(a, c));

  return 0;
}

int sum(int a, int b) {
  return a + b;
}

void print_int(int a) {
  printf("The number is %d\n", a);
}

