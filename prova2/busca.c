#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

celula *busca (celula *le, int x) {
  celula *p = le -> prox;
  while ((p != NULL) && (p -> dado != x)) {
    p = p ->prox;
  }
  return p;
}

celula *busca_rec (celula *le, int x) {
  if (le == NULL || le -> dado == x)
  return le;
  else
  return busca_rec (le -> prox, x);
}

int main () {
  celula *c, *c1, *c2, *c3, *c4;

  c = malloc (sizeof(celula));
  c1 = malloc (sizeof(celula));
  c2 = malloc (sizeof(celula));
  c3 = malloc (sizeof(celula));
  c4 = malloc (sizeof(celula));

  c1 -> dado = 1;
  c2 -> dado = 2;
  c3 -> dado = 4;
  c4 -> dado = 9;

  c -> prox = c1;
  c1 -> prox = c2;
  c2 -> prox = c3;
  c3 -> prox = c4;
  c4 -> prox = NULL;

  if (busca_rec (c, 1) != NULL)
    printf ("CONGRAS YOU DID\n");
  else
    printf ("FALHOU\n");

  return 0;
}
