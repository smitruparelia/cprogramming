#include <stdio.h>

int main(void) {
  int n = 1;

  if (*(char *)&n == 1)
    printf("Little endian\n");
  else
    printf("Big endian\n");

  return 0;
}
