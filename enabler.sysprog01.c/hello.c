#include <stdio.h>

void add_sum_with_ptr (int *value) {
  *value += 5;
}

void add_sum_without_ptr (int value) {
  value += 10;
}

int main(void){
  puts("Hello, World\n");
  int a = 10;

  printf("Nilai awal a adalah %d \n", a);

  add_sum_without_ptr(a);
  printf("Ketika dimutasi dengan tidak menggunakan pointer maka \nNilai kedua a adalah %d \n", a);

  add_sum_with_ptr(&a);
  printf("Ketika dimutasi dengan menggunakan pointer maka \nNilai terakhir a adalah %d \n", a);


  int bb = 20;

  int *bbc = &bb;
  int **bbcd = &bbc;
  int ***bbcde = &bbcd;

  printf("main value %d \n", bb);

  printf("first pointer %p \n", &bbc);

  printf("second pointer %p \n", *bbcd);

  printf("third pointer %p \n", *bbcde);

  return 0;
}