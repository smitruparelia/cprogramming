#include <stdio.h>

struct whale {
  char name[1024];
  float length;
  int mass;
};

int main(void) {
  FILE *fp;
  struct whale whales;
  char line[1024];

  fp = fopen("whales.txt", "r");

  while (fgets(line, sizeof line, fp) != NULL) {
    sscanf(line, "%s %f %d", whales.name, &whales.length, &whales.mass);
    printf("%s whale, %d tonnes, %.1f meters\n", whales.name, whales.mass,
           whales.length);
  }

  fclose(fp);

  return 0;
}
