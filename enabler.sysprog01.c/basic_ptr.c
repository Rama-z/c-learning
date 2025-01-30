#include <stdio.h>

/* Teaching notes:
 * Demonstrating pointers
 * 
 * Learning notes:
 * How to declare pointers
 * How to dereference pointers
 * How to get the address of a variable
 */

int main(void) {

  int a = 30; 

  int *ptr = &a;

  printf("a = %d\n", a);
  printf("ptr = %p bernilai %d\n", ptr, *ptr);

  a = 40;
  printf("a diubah jadi %d\n", a);
  printf("ptr = %p sekarang bernilai %d\n", ptr, *ptr);

  /* VOID POINTER -- uncomment later on void */

  /*

  void *vptr = &a; 
  printf("vptr = %p\n", vptr);

  char *cptr = (char *)vptr; 
  printf("cptr = %p\n", cptr);

  for (int i = 0; i < sizeof(a); i++) {
    printf("cptr[%d] = 0x%X\n", i, cptr[i]);
  }

  *cptr = 0x2A;  

  printf("a = 0x%X\n", a);

  */
}
