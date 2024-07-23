#include <stdio.h>

int main(void) {
  int *p = NULL;
  int j = 10;

  p = &j;

  printf("%d\n", *p);

  return 0;
}
