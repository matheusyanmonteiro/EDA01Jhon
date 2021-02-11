#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3){
  celula *p = l1 -> prox;
  celula *d = l2 -> prox;
  while (p != NULL && d != NULL) {
    if (p -> dado <= d -> dado){
      l3 -> prox = p;
      p = p -> prox;
      l3 -> prox -> prox = NULL;
      l3 = l3 -> prox;

    } else {
      l3 -> prox = d;
      d = d -> prox;
      l3 -> prox -> prox = NULL;
      l3 = l3 -> prox;

    }
  }
  if ( p != NULL) {
    l3 -> prox = p;
  } else if (d != NULL){
    l3 -> prox = d;
  }
}

void imprime_rec (celula *le) {
  if (le -> prox == NULL) {
    printf("NULL\n");
  } else {
    printf("%d, ", le -> prox -> dado);
    imprime_rec(le -> prox);
  }
}

int main () {
  celula *d1, *d2, *d3, *d4, *de;
  celula *c1, *c2, *c3, *ce;
  celula *l3 = malloc (sizeof(celula));

  de = malloc (sizeof(celula));//cabeçs
  d1 = malloc (sizeof(celula));
  d2 = malloc (sizeof(celula));
  d3 = malloc (sizeof(celula));
  d4 = malloc (sizeof(celula));

  ce = malloc (sizeof(celula));
  c1 = malloc (sizeof(celula));
  c2 = malloc (sizeof(celula));
  c3 = malloc (sizeof(celula));

  de -> prox = d1;
  d1 -> prox = d2;
  d2 -> prox = d3;
  d3 -> prox = d4;
  d4 -> prox = NULL;

  d1 -> dado = 1;
  d2 -> dado = 7;
  d3 -> dado = 9;
  d4 -> dado = 10;

  ce -> prox = c1;
  c1 -> prox = c2;
  c2 -> prox = c3;
  c3 -> prox = NULL;

  c1 -> dado = 2;
  c2 -> dado = 3;
  c3 -> dado = 8;

  imprime_rec(de);
  imprime_rec(ce);
  mescla_listas(de, ce, l3);
  imprime_rec(l3);

  free(ce);
  free(c1);
  free(c2);
  free(c3);
  free(de);
  free(d1);
  free(d2);
  free(d3);
  free(d4);
  free(l3);
  return 0;
}
