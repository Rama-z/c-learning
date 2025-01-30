#include <stdio.h>

int main(void) {
  int a = 30; int d = 4;
  int b = 12; int c = 4;

  printf("a=%d, b=%d, c=%d, d=%d\n\n",a,b,c,d);

  printf("a < b = %d\n", a < b);
  printf("a > b = %d\n", a > b);
  printf("a <= b = %d\n", a <= b);
  printf("a >= b = %d\n", a >= b);
  printf("a == b = %d\n", a == b);
  printf("a != b = %d\n", a != b);
  printf("a - b == 18 = %d\n", a - b == 18);

  return 0;
}
