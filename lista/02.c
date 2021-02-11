#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b = 0;
  while (scanf("%d", &a) != -1){
    b++;
  }
  printf("%d\n",b);
  return 0;
}
