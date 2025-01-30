#include <stdio.h>

/* Teaching notes:
 * 1. This is a simple program demonstrates the use of struct in C.
 * 2. Use the shopping cart items example to explain the concept of struct.
 */ 

struct item_t {
  char *name;
  int quantity;
  unsigned int price;
};

int main(void) {
  struct item_t item = {"Apple", 10, 100};

  printf("%s - %d, each %d\n", item.name, item.quantity, item.price);
};
