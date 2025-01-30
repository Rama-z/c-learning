#include <stdio.h> 

union variant_t {
  int i; 
  short h;
  char c;
};

int main(void) {
  union variant_t v;
  v.i = 0x12345678;

  printf("Ukuran union variant_t = %zu bytes\n", sizeof(union variant_t));

  printf("v.i = 0x%x\n", v.i);
  printf("v.h = 0x%x\n", v.h);
  printf("v.c = 0x%x\n", v.c);
  return 0;
}
