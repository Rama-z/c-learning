#include <stdio.h>

/* 
  EOF adalah 
 */


int main() {
    int c;
    printf("Masukkan beberapa karakter. Tekan Ctrl+D (Unix) atau Ctrl+Z (Windows) untuk EOF:\n");
    
    while ((c = getchar()) != EOF) {
        printf("Karakter yang dibaca: %c (ASCII: %d)\n", c, c);
    }
    
    printf("EOF terdeteksi. Nilai EOF: %d\n", EOF);
    
    return 0;
}