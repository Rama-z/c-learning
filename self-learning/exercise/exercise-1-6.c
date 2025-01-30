#include <stdio.h>

int main() {
  int c;

  printf("Masukkan karakter (tekan Ctrl+D untuk EOF di Linux/Mac atau Ctrl+Z "
         "di Windows):\n");

  while ((c = getchar()) != EOF) {
    printf("Hasil ekspresi (getchar() != EOF): %d\n", c != EOF);
  }

  printf("EOF diterima, loop berhenti.\n");

  return 0;
}
