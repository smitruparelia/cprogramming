#include <stdio.h>

int main(void) {
  int goat_count = 2;

  switch (goat_count) {
  case 0:
    printf("you have no goats.\n");
    break;
  case 1:
    printf("you have 1 goat.\n");
    break;
  case 2:
    printf("you have 2 goats.\n");
    break;
  default:
    printf("you have a bona fide plethora of goats.\n");
  }

  return 0;
}
