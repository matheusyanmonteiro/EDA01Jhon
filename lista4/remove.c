#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula prox;
} celula;

void remove_depois (celula *le) {
  if (le -> prox != NULL) {
    celula *aux = le -> prox;
    le -> prox = aux -> prox;
    free(aux);
  }
}
