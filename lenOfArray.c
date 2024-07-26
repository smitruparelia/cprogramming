#include <stdio.h>

int main(void) {
  int array[12];

  printf("Size of array in bytes: %zu.\n", sizeof(array));
  printf("Size of integer in bytes: %zu.\n", sizeof(int));
  printf("Length of array: %zu.\n", sizeof(array) / sizeof(int));

  return 0;
}
