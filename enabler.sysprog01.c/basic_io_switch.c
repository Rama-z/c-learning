#include <stdio.h>

int main(void) {
  int age;
  char grade;

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("You are %d years old.\n", age);

  if (age < 18) {
    puts ("You are a minor.");
  } else if (age <=21) {
    puts ("You are a young adult. No drinking.");
  } else {
    puts ("You are an adult.");
  }

  printf("Now, Enter your marks (A-F): ");

  /* The space before %c is to consume the newline character left in the buffer
   * after the previous scanf. This is because the newline character is not consumed
   * by the previous scanf. */
  scanf(" %c", &grade); 

  switch (grade) {
    case 'A':
      puts("Excellent!");
      break;
    case 'B':
      puts("Good job!");
      break;
    case 'C':
      puts("You can do better.");
      break;
    case 'D':
      puts("You need to work harder.");
      break;
    case 'F':
      puts("You have failed.");
      break;
    default:
      puts("Invalid grade.");
  }

  return 0;
}
