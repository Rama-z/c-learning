#include <stdio.h>

int main() {
  int c = getchar();

  while (c != EOF) {
    /* printf("This is top threshold \n"); */
    putchar(c);
    printf("\n");
    /* printf("This is bottom threshold \n"); */
    c = getchar();
  }

  return 0;
}
