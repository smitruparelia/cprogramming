#include <stdio.h>

int main(void) {
  int i = 1;

  if (*(char *)&i == 1) {
    printf("Little endian\n");
  } else {
    printf("Bid endian\n");
  }

  return 0;
}
