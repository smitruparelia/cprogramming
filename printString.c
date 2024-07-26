#include <stdio.h>

int main(void) {
  char *s = "Hello, World!";

  while (*s != '\0') {
    printf("%c", *s);
    s++;
  }
  printf("\n");

  return 0;
}
