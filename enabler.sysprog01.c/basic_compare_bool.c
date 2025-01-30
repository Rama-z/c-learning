#include <stdio.h>

int main(void) {
  int a = 30; int d = 4;
  int b = 12; int c = 4;

  printf("a=%d, b=%d, c=%d, d=%d\n\n",a,b,c,d);


  printf("a < b && c < b = %d\n", a < b && c < b);
  printf("a < b || c < d = %d\n", a < b || c < d);
  printf("!(a < b) = %d\n", !(a < b));
  return 0;
}
