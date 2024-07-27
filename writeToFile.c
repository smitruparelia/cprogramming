#include <stdio.h>

int main(void) {
  FILE *fp;
  int x = 32;

  // fp = fopen("output.txt", "w");

  fp = stdout;

  fputc('B', fp);
  fputc('\n', fp);
  fprintf(fp, "x = %d\n", x);
  fputs("Hello, World!\n", fp);

  fclose(fp);

  return 0;
}
