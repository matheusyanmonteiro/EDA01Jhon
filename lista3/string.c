#include <stdio.h>

void inv( char *s){

  if (*s != '\0'){
    inv(s + 1);
    putchar(*s);
  }
}

int main() {
  char nome[500];
  scanf("%s",nome);
  inv(nome);
  printf("\n");
  return 0;
}
