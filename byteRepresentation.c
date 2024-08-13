#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  for (int i = 0; i < len; i++) {
    printf("%02x", start[i]);
  }
  printf("\n");
}

void show_int(int x) { show_bytes((byte_pointer)&x, sizeof(int)); }

void show_float(float x) { show_bytes((byte_pointer)&x, sizeof(float)); }

void show_pointer(void *x) { show_bytes((byte_pointer)&x, sizeof(void *)); }

int main(void) {
  int x = 12345;
  float y = 43.581;
  char *c = "Hello, world!";

  show_int(x);
  show_float(y);
  show_pointer(c);

  return 0;
}
