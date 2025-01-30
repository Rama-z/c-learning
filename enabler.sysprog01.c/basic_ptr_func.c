#include <stdio.h> 

struct item_t {
  char *name; 
  int price; 
  int quantity; 
};

void print_item(struct item_t *item) {
  printf("--- Item ---\n");
  printf("Item: %s\n", item->name);
  printf("Price: %d\n", item->price);
  printf("Quantity: %d\n\n", item->quantity);
}

void change_quantity(struct item_t *item, int new_quantity) {
  item->quantity = new_quantity;
}

void change_price(struct item_t *item, int new_price) {
  item->price = new_price;
}

/* typedef */ 

typedef void (*operation_t)(struct item_t *, int);

int main(void) {
  struct item_t item = {"Apple", 2000, 100};
  print_item(&item);

  puts("After calling change_quantity");
  change_quantity(&item, 50);
  print_item(&item);

  void (*op)(struct item_t *, int);

  /* operation_t op; */
  op = change_quantity;
  op(&item, 25);

  puts("After op = change_quantity"); 
  print_item(&item);

  op = change_price;
  op(&item, 2500);

  puts("After op = change_price");
  print_item(&item);

  return 0;
}
