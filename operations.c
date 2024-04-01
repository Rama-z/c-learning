#include <stdio.h>

int main () {
    int age;

    printf("Input your age: ");
    scanf("%d", &age);

    if (age < 10 || age > 20) {
        printf("You are not allowed to enter this room \n");
    } else if (age == 18) {
        printf("You are in your prime age \n");
    } else {
        printf ("You are allowed to enter this room \n");
    }
    
    return 0;
}