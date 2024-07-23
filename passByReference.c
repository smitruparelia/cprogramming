#include <stdio.h>

void increment(int *p) { *p += 1; }

int main(void) {
  int i = 10;
  int *p = &i;

  printf("i is %d.\n", i);
  printf("dereferencing p: %d.\n", *p);

  increment(p);

  printf("i is now %d.\n", i);
  printf("dereferencing p after increment: %d.\n", *p);

  return 0;
}
