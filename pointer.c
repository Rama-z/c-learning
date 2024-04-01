#include <stdio.h>

void add5(int *x){
    printf("Nilai dari x adalah %p \n", x);
    printf("Nilai dari *x adalah %d \n", *x);
    *x += 5;
}

void main () {
    int a = 10;
    // int *b = &a;

    // printf("Nilai dari a di alamat %p adalah %d \n", b, a);

    // printf("Nilai yang ditunjuk oleh pointer b adalah %d \n", *b);

    add5(&a);

}