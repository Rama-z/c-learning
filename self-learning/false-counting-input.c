#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *input, ch;
  int size = 10;
  int index = 0;

  printf("Input your options: \n");
  input = (char *)malloc(size * sizeof(char));
  fgets(input, sizeof(input), stdin);

  input[strcspn(input, "\n")] = '\0';

  if (strcmp(input, "Hello") == 0) {
    printf("Goodbye!\n");
    return 0;
  }

  while ((ch = getchar()) != '\n' && ch != EOF) {
    input[index++] = ch;

    if (index >= size) {
      size *= 2;
      input = (char *)realloc(input, size * sizeof(char));
      if (input == NULL) {
        printf("Gagal mengalokasikan memori\n");
        return 1;
      }
    }
  }

  input[index] = '\0';

  printf("value input adalah %s\n", input);

  free(input);

  return 0;
}
