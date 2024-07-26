#include <stdio.h>

int main(void) {
  int i;
  int *p; // this is NOT a dereference -- this is a type "int*"

  p = &i; // p now points to i. p holds address of i

  i = 10;  // i is now 10
  *p = 20; // the thing that p points to (namely i!) is now 20!!

  printf("i is %d.\n", i);
  printf("i is %d using pointer p.\n", *p); // dereference-p

  return 0;
}
