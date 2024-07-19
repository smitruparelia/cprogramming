#include <stdio.h>

void print_bits(char byte) {
  for (int i = 0; i < 8; i++) {
    printf("%d", (byte >> i) & 1);
  }
  printf("\n");
}

int main(void) {
  int a = 255, b = 9;
  char *ptr_a = (char *)&a;
  char *ptr_b = (char *)&b;
  for (int i = 0; i < sizeof(int); i++) {
    print_bits(*ptr_a);
    ptr_a++;
  }
  printf("================\n");
  for (int i = 0; i < sizeof(int); i++) {
    print_bits(*ptr_b);
    ptr_b++;
  }

  return 0;
}
