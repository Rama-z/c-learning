#include <stdio.h>

/* Teaching notes:
 * 1. This is a simple program demonstrates the use of struct in C.
 * 2. Use the shopping cart items example to explain the concept of struct.
 * 3. Show the different between strcut and pointer
 * 4. Show that the struct size is known at compile time
 */ 

struct item_t {
  char *name;
  int quantity;
  unsigned int price;
};

/* Change this to use pointer */
int subtotal(struct item_t item) {
  return item.quantity * item.price;
};

int main(void) {
  int total = 0;
  struct item_t items[] = {
    {"Apple", 10, 100},
    {"Banana", 20, 50},
    {"Orange", 30, 30}
  };

  /* Change this to use sizeof() to get the size of the array */
  for (int i = 0; i < 3; i++) {
    printf("Item: %s, Quantity: %d, Price: %d, Subtotal: %d\n",
           items[i].name, items[i].quantity, items[i].price, subtotal(items[i]));

    total += subtotal(items[i]);
  }

  printf("Total: %d\n", total);


};
