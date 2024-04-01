#include <stdio.h>

void main (){
    // inputTutorial();
    int age;

    int res;
    printf("Input your age: ");
    res = scanf("%d", &age);
    printf("Result: %d \n", res);
    if(res > 0){
        printf("So your age is %d \n", age);
    } else {
        printf("You input the wrong number");
    }

}

int inputTutorial (){
    int age = 20;

    printf("Your age is: %d \n", age);
    return 0;
}