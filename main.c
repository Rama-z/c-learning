#include <stdio.h>
#include "submain.h"

void main () {
    int subsubmain = 20;
    int *submain;
    char charMain[] = "asdasdsa";
    char *charCharMain;

    submain = &subsubmain;
    charCharMain = charMain;

    firstFunction(submain, subsubmain);
    secondFunction(charMain, charCharMain);

    printf("Ini adalah main file / file utama");

    // Menggabungkan string


    // Mengganti variable yang berisi string
    char mergeString[50] = "asdasdasd";
    
    strcpy(mergeString, "bebek");

    printf("Ini adalah hasil mengganti string, hasil = %s \n", mergeString);


}