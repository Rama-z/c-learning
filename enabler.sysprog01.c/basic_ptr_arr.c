#include <stdio.h>

/* Teaching notes:
 * - This is a simple example of an array of integers.
 * - Use pointer arithmetic to access the elements of the array.
 */

void print_arr(int *arr, int size) {
  printf("[");
  for (int i = 0; i < size; i++) {
    printf("%d ", *(arr + i));
  }
  printf("]\n");
}

int main(void) {
  int xs[3] = { 6, 7, 11 };
  int *p = xs;

  printf("Array: "); print_arr(xs, 3);
  printf("Pointer: "); print_arr(p, 3);
  puts("");

  ++p;
  printf("Array: "); print_arr(xs, 3);
  printf("Pointer: "); print_arr(p, 2);
  puts("");

  xs[1] = 59;
  printf("Array: "); print_arr(xs, 3);
  printf("Pointer: "); print_arr(p, 2);
}
