#include <stdio.h>

int main(void) {
  FILE *fp;
  char c[1024];
  int linecount = 0;

  fp = fopen("quote.txt", "r");

  while (fgets(c, sizeof c, fp) != NULL) {
    printf("%d: %s", ++linecount, c);
  }

  fclose(fp);

  return 0;
}
