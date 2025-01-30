#include <stdio.h>

long factorial(int n) {

  return (n == 0) ? 1 : n * factorial(n - 1);
}

int main () {

  int num;

  int *num_pointer = &num;


  printf("Input number you want to see tha factorial values: \n");
  scanf("%d", num_pointer);

  printf("Factorial number of %d is %ld\n", num, factorial(num));

  return 0;

}