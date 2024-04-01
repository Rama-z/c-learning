#include <stdio.h>
#include "submain.h"

void firstFunction (int *submain, int subsubmain) {
    printf("Ini adalah function di file pendukung / submain \n");
    printf("Submain params %p \n", submain);
    printf("Subsubmain params %d \n", subsubmain);
}

void secondFunction (char *charMain, char *charCharMain) {
    printf("Ini adalah function di file pendukung / submain \n");
    printf("Submain params %s \n", charMain);
    printf("Subsubmain params %s \n", charCharMain);
}
