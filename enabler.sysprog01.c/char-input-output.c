#include <stdio.h>
#include <string.h>


#define MAX_INPUT 10


void main () {
  int c;
  printf("EOF = %d\n", EOF);
  c = getchar();
  printf("C1 = %d \n", c);

  

  while (c != EOF)
  {
    printf("C2 = %d \n", c);
    putchar(c);
    c = getchar();
    printf("C3 = %d \n", c);
  }
  
}

// Unsafe code, because we are not making contraints about input value
// At least we add max char length for input
// int main(void) {
//   char input[10];
//   scanf("%9s", input);
//   printf("value input adalah %s\n", input);
//   return 0;
// }


// int main(void) {
//     char input[MAX_INPUT];
    
//     printf("Masukkan string (maksimum %d karakter): ", MAX_INPUT - 1);
    
//     if (fgets(input, sizeof(input), stdin) != NULL) {
//         // Menghapus newline jika ada
//         input[strcspn(input, "\n")] = 0;
        
//         printf("Anda memasukkan: %s\n", input);
//     } else {
//         printf("Error membaca input.\n");
//     }
    
//     return 0;
// }