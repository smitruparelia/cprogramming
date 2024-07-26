#include <stdio.h>

int main(void) {
  struct car {
    char *name;
    float price;
    int speed;
  };

  struct car saturn;

  saturn.name = "Saturn SL/2";
  saturn.price = 15999.99;
  saturn.speed = 175;

  printf("Name:           %s\n", saturn.name);
  printf("Price (USD):    %f\n", saturn.price);
  printf("Top Speer (km): %d\n", saturn.speed);

  return 0;
}
