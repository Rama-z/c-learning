#include <stdio.h>

int main(void) {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("You are %d years old.\n", age);

  if (age < 18) {
    puts ("You are a minor.");
  } else {
    puts ("You are an adult.");
  }

  return 0;
}
