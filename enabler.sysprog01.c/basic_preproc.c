#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define DEBUG

int main() {
  int x = 5, y = 7;
  printf("Max: %d\n", MAX(x, y));

#ifdef DEBUG
  printf("Debug mode active\n");
#endif

  return 0;
}

