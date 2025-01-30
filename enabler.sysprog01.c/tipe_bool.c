#include <stdio.h>

#define print_int_bool(value) do {\
  printf("%d is %s\n", (value), (value) ? "true" : "false"); \
} while(0)

#define print_float_bool(value) do {\
  printf("%.2f is %s\n", (value) , (value) ? "true" : "false"); \
} while(0)

int main(void) {
  print_int_bool(1);
  print_int_bool(0);
  print_int_bool(-1);
  print_int_bool(-1024);

  print_float_bool(1.0);
  print_float_bool(0.0);
  print_float_bool(-1.0);
}
