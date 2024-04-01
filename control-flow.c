#include <stdio.h>

void main (){
    int age;
    int multiplyOptions = 10;
    printf("Input your age: ");
    int res = scanf("%d", &age);

    printf("Age value is: %d \n", age);
    printf("Result value is: %d \n", res);
    printf("%d \n", age * multiplyOptions);

    // for (size_t i = 0; i <= age; i++)
    // {
    //     printf("Loop number %ld \n", i);
    // }

    switch (age)
    {
    case 10:
        /* code */
        break;
    
    default:
        break;
    }
    
}