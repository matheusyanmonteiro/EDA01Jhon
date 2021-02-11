#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
}celula;

void *imprime (celula *le){
  if (le == NULL)
    printf("NULL\n");
  else {
      for (celula *p = le -> prox; p != NULL; p = p -> prox)
      printf("%d -> ", p-> dado);
    printf("NULL\n");
  }
}

void *imprime_rec (celula *le) {
  if (le -> prox == NULL)
    printf("NULL\n");
  else {
    printf("%d -> ", le -> prox -> dado);
    imprime_rec(le -> prox);
  }
}
/*
int main() {
  celula *p, *novo1, *novo2, *novo3;

  p = malloc(sizeof(celula));

  novo1 = malloc(sizeof(celula));
  novo2 = malloc(sizeof(celula));
  novo3 = malloc(sizeof(celula));


    novo1 -> dado = 1;
    novo2 -> dado = 2;
    novo3 -> dado = 3;

    novo3 -> prox = NULL;
    novo2 -> prox = novo3;
    novo1 -> prox = novo2;

    p -> prox = novo1;

    imprime(p);
    imprime_rec(p);


}
*/
