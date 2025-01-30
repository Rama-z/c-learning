#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(void) {
  int a = 30; int b = 12;

  printf("The sum of %d and %d is %d\n", a, b, sum(a, b));

  return 0;
}
