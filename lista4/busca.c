#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
}celula;

celula *busca (celula *le, int x) {
  celula *p;
  for (p = le; p != NULL   && p -> dado != x; p = p -> prox);
  return p;
}

celula *busca_rec (celula *p, int x) {
  if (p == NULL || p -> dado == x)
  return p;
  else
  return busca_rec(p -> prox, x);
}

int main () {
  int x;
  celula *p, *novo1, *novo2, *novo3;

  p = malloc (sizeof (celula));
  novo1 = malloc (sizeof (celula));
  novo2 = malloc (sizeof (celula));
  novo3 = malloc (sizeof (celula));

  novo1 -> dado = 1;
  novo2 -> dado = 2;
  novo3 -> dado = 3;

  novo1 -> prox = novo2;
  novo2 -> prox = novo3;
  novo3 -> prox = NULL;

  p -> prox = novo1;

  scanf("%d", &x);
  if (busca(p, x) != NULL){
    printf("achou\n");
  }else{
    printf("NAO achou:(\n");
  }


  return 0;
}
