#include <stdio.h>


typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3){
  celula *ponteiro1 = l1 -> prox;
  celula *ponteiro2 = l2 -> prox;
  while (ponteiro1 != NULL && ponteiro2 != NULL) {
    if (ponteiro1 -> dado <= ponteiro2 -> dado){
      l3 -> prox = ponteiro1;
      ponteiro1 = ponteiro1 -> prox;
      l3 -> prox -> prox = NULL;
      l3 = l3 -> prox;

    } else {
      l3 -> prox = ponteiro2;
      ponteiro2 = ponteiro2 -> prox;
      l3 -> prox -> prox = NULL;
      l3 = l3 -> prox;
    }
  }
  if ( ponteiro1 != NULL) {
    l3 -> prox = ponteiro1;
  } else if (ponteiro2 != NULL){
    l3 -> prox = ponteiro2;
  }
}
