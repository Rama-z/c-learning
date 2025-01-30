#include <stdio.h>


int main() {
  int a = 12, b = 20;
  int c = 4;

  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);
  printf("b / a = %d\n", b / a);
  printf("b %% a = %d\n", b % a);
  printf("a + b * c = %d\n", a + b * c);

  // Increment/Decrement
  int x = 5;
  printf("x++ = %d\n", x++);
  printf("++x = %d\n", ++x);
  printf("x-- = %d\n", x--);
  printf("--x = %d\n", --x);

  // Assignment Operators
  int y = 10;
  y += 5; printf("y += 5: %d\n", y);
  y -= 3; printf("y -= 3: %d\n", y);
  y *= 2; printf("y *= 2: %d\n", y);
  y /= 4; printf("y /= 4: %d\n", y);
  y %= 3; printf("y %%= 3: %d\n", y);
  
  return 0;
}
