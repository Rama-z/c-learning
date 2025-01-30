#include <stdio.h>
#include <string.h>

// Typedef for simple data type
typedef unsigned long ulong;

// Typedef for struct
typedef struct {
  char name[50];
  int age;
} Person;

// Typedef for function pointer
typedef int (*MathOperation)(int, int);

// Functions to be used with function pointer
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
  // Using typedef ulong
  ulong big_number = 1234567890UL;
  printf("Big number: %lu\n", big_number);

  // Using typedef Person
  Person someone = {"John Doe", 30};
  printf("Name: %s, Age: %d\n", someone.name, someone.age);

  // Using typedef MathOperation
  MathOperation operation = add;
  printf("10 + 5 = %d\n", operation(10, 5));

  operation = subtract;
  printf("10 - 5 = %d\n", operation(10, 5));

  return 0;
}
