#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Execute";
  char str2[] = "Hello World!";
  strncpy(str2, str1, 100);
  printf("%s\n", str1);
  printf("%s\n", str2);
  printf("%lu\n", strlen(str2));
  return 0;
}
