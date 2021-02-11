#include <stdio.h>
#include <stdlib.h>

void imprime (char *v, int n) {
  char *c;
  for (c = v; c < v + n; c++)
    printf("%c",*c);
}

int  main() {
  char name[80];
  int i = 10;
  scanf("%s",name);
  imprime(name,i);
  printf("\n");

  return 0;
}
