#include <stdio.h>

#define CONCAT(a, b) a##b
#define PRINT_VAR(var) printf(#var " = %d\n", var)

int main() {
  int xy = 42;
  PRINT_VAR(CONCAT(x, y));
  return 0;
}

