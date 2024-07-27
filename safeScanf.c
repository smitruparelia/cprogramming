#include <stdio.h>
#include <stdlib.h>

void clear_buffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}

int main(void) {
  char numBuffer[20];
  char buffer[10];
  char *endPtr;
  long int number;

  printf("Enter a string (9 characters long): \n");
  scanf("%9s", buffer);
  clear_buffer();
  printf("You entered: %s\n", buffer);

  printf("Enter a number: ");
  scanf("%19s", numBuffer);
  number = strtol(numBuffer, &endPtr, 10);

  if (*endPtr == '\0')
    printf("You have entered: %d\n", (int)number);
  else
    printf("Invalid number\n");

  return 0;
}
