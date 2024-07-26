#include <stdio.h>

int main(void) {
  FILE *fp;
  int c;

  fp = fopen("hello.txt", "r");

  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }
  printf("\n");
  fclose(fp);
  return 0;
}
