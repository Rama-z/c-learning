#include <stdio.h>
#include <string.h>

void main() {
    char greetings[] = "Hello world";
    size_t greetings_len = sizeof(greetings);
    int greet_len = strlen(greetings);

    printf("Berikut adalah properti dari string  %s \n", greetings);
    printf("Panjang dari string %s adalah %d \n", greetings, greet_len);
    printf("Ukuran dari string %s adalah %lu \n", greetings, greetings_len);
}