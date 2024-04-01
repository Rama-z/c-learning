#include <stdio.h>

int main(void)
{
    int age;
    int herAge = 0;
    age = 47;
    unsigned int hisAge;
    printf("His age is: %d. \n", hisAge);
    if (herAge) {
        printf("Her age is: %d \n", herAge);
        return 0;
    }

    printf("My Age is: %d \n", age);

    age = 57;

    printf("My Age Later is: %d \n", age);
}
