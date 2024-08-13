#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  for (int i = 0; i < len; i++)
    printf("%02x", start[i]);
  printf("\n");
}

int main(void) {
  int i = 1;

  if (*(char *)&i == 1)
    printf("Your system implements Little Endian byte order as shown below:\n");
  else
    printf("Your system implements Big Endian byte order as shown below:\n");

  show_bytes((byte_pointer)&i, sizeof(int));
  return 0;
}
