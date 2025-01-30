// Di sini saya ingin membuat program yang membantu saya memahami tentang input
// char di bahasa c Nah, di sini ketika program pertama kali dijalankan, program
// akan meminta input dari user User ingin mengerti tentang apa? Untuk saat ini,
// opsi yang tersedia adalah:
// 1. File Copying
// 2. Character Counting
// 3. Line Counting
// 4. Word Counting

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *input, ch;
  int size = 10;
  int index = 0;

  // Alokasi awal memori
  // Baris kode ini digunakan untuk membuat memori yang lebih besar
  // Jika memang mengalami error, maka baris kode ini digunakan
  // Beberapa kemungkinan error yang mungkin terjadi adalah:
  // 1. Memori tidak ada
  // 2. Memori tidak cukup
  // 3. Memori terlalu besar
  // 4. Memori tidak diberikan
  // 5. Memori tidak valid
  input = (char *)malloc(size * sizeof(char));
  if (input == NULL) {
    printf("Gagal mengalokasikan memori.\n");
    return 1;
  }

  printf("Input your options: \n");
  printf("This is the options you can input: \n");
  printf("1. File Copying\n");
  printf("2. Character Counting\n");
  printf("3. Line Counting\n");
  printf("4. Word Counting\n");
  printf("Which one do you want to choose? (choose by input the number)\n");

  // Ada 3 cara untuk mengalokasikan memori
  // - Malloc
  // - Calloc
  // - Realloc

  // Membaca input menggunakan getchar() secara dinamis
  while ((ch = getchar()) != '\n' && ch != EOF) {
    input[index++] = ch;

    // Perluas memori jika kapasitas penuh
    if (index >= size) {
      size *= 2;
      input = (char *)realloc(input, size * sizeof(char));
      if (input == NULL) {
        printf("Gagal mengalokasikan memori tambahan.\n");
        return 1;
      }
    }
  }

  input[index] = '\0'; // Null-terminator untuk string

  if (strcmp(input, "1") == 0) {
    int fc;
    printf("File Copying\n");
    printf("You have chosen File Copying\n");
    free(input); // Bebaskan memori sebelum keluar

    fc = getchar();
    while (fc != EOF) {
      putchar(fc);
      fc = getchar();
    }

    return 0;
  }

  if (strcmp(input, "2") == 0) {

    free(input); // Bebaskan memori sebelum keluar
    return 0;
  }

  if (strcmp(input, "3") == 0) {
    printf("Line Counting\n");
    printf("You have chosen Line Counting\n");
    free(input); // Bebaskan memori sebelum keluar
    return 0;
  }

  if (strcmp(input, "4") == 0) {
    printf("Word Counting\n");
    printf("You have chosen Word Counting\n");
    free(input); // Bebaskan memori sebelum keluar
    return 0;
  }

  printf("value input adalah %s\n", input);

  // Bebaskan memori
  free(input);

  return 0;
}
