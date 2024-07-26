#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

void set_price(struct car *c, float new_price) { c->price = new_price; }

int main(void) {

  struct car saturn = {.name = "Saturn SL/2", .speed = 175, .price = 15999.99};

  printf("Price before alteration: %f\n", saturn.price);

  set_price(&saturn, 799.99);

  printf("Price after alteration: %f\n", saturn.price);

  return 0;
}
