#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(void) {
  int array[MAX];
  int i;

  struct MyStruct {
    int a;
    int b;
  };

  for (i = 0; i < MAX; i++) {
    array[i] = i;
  }

  for (i = 0; i < MAX; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
