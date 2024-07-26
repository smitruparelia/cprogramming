#include <stdio.h>
#include <string.h>

int main(void) {
  char s[] = "Hello, World!";
  char t[100];

  strcpy(t, s);

  t[0] = 'Z';

  printf("%s\n", s);
  printf("%s\n", t);

  return 0;
}
