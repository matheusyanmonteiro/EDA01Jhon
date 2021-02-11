#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;


void divide_lista (celula *l, celula *l1, celula *l2){
   celula *ponteiro = l -> prox;
  while (ponteiro != NULL){
    if ((ponteiro -> dado % 2) == 0){
      l2 -> prox = ponteiro;
      ponteiro = ponteiro -> prox;
      l2 -> prox -> prox = NULL;
      l2 = l2 -> prox;
    }else{
      l1 -> prox = ponteiro;
      ponteiro = ponteiro -> prox;
      l1 -> prox -> prox = NULL;
      l1 = l1 -> prox;
    }
  }
}
