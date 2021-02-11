#include <stdio.h>
#include <stdlib.h>

int main () {
  int var;
  int contador = 0;

  while (scanf("%d",&var) != EOF){
    contador ++;
  }

  printf("%d\n",contador);
  return 0;
}
