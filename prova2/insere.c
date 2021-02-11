#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void insere_inicio (celula *le, int x) {
  celula *novo = malloc (sizeof(celula));
  if (novo == NULL)
    exit(EXIT_FAILURE);
  novo -> dado = x;
  novo -> prox = le -> prox;
  le -> prox = novo;
}

void insere_antes (celula *le, int x, int y) {
  celula *novo = malloc (sizeof(celula));
  if (novo == NULL)
    exit(EXIT_FAILURE);
  novo -> dado = x;
  for (celula *p = le -> prox; (le -> prox != NULL) && (le -> prox -> dado != y); p = p -> prox);
  novo -> prox = p -> prox;
  p -> prox = novo;
}

int main () {
  celula *ce = malloc (sizeof(celula));

  ce -> prox = NULL;

  
  return 0;
}
