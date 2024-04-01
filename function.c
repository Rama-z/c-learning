#include <stdio.h>

int sum (int a, int b);

int main(void) {
    int firstVar, secondVar;
    int c;

    printf("This is sum application \n");
    printf("Input your first number: ");
    scanf("%d", &firstVar);
    printf("Input your second number: ");
    scanf("%d", &secondVar);

    c = sum(firstVar,secondVar); 

    printf("Your result number is: %d \n", c);

    return 0;
}

int sum (int a, int b) {
    return a + b;
}

