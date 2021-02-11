#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;
/*
void divide_lista (celula *l, celula *l1, celula *l2){
  celula *p, *q, *r;
  p = l -> prox;
  q = l1 -> prox;
  r = l2 -> prox;
  while (p != NULL) {
    if (p -> prox != NULL && (p -> prox -> dado % 2) == 0){
      q = p -> prox;
      p = p -> prox;
      q = q -> prox = NULL;
    } else {
      r  = p -> prox;
      p = p -> prox;
      r = r -> prox = NULL;
    }
    p = p -> prox;
  }
}
*/
void divide_lista (celula *l, celula *l1, celula *l2){
   celula *p = l -> prox;
  while (p != NULL) {
    if ((p -> dado % 2) == 0){
      l2 -> prox = p;
      p = p -> prox;
      l2 -> prox -> prox = NULL;
      l2 = l2 -> prox;
    } else {
      l1 -> prox = p;
      p = p -> prox;
      l1 -> prox -> prox = NULL;
      l1 = l1 -> prox;
    }
  }
}

void imprime_rec (celula *le) {
  if (le -> prox == NULL) {
    printf ("NULL\n");
  } else {
    printf ("%d, ", le -> prox -> dado);
    imprime_rec (le -> prox);
  }
}


int main () {
  celula *d1, *d2, *d3, *d4, *d5, *d6, *d7;
  celula *le = malloc (sizeof(celula));
  celula *l1 = malloc (sizeof(celula));
  celula *l2 = malloc (sizeof(celula));

  d1 = malloc (sizeof(celula));
  d2 = malloc (sizeof(celula));
  d3 = malloc (sizeof(celula));
  d4 = malloc (sizeof(celula));
  d5 = malloc (sizeof(celula));
  d6 = malloc (sizeof(celula));
  d7 = malloc (sizeof(celula));

  l1 -> prox = NULL;
  l2 -> prox = NULL;

  d1 -> dado = 1;
  d2 -> dado = 4;
  d3 -> dado = -9;
  d4 -> dado = 2;
  d5 -> dado = 7;
  d6 -> dado = 10;
  d7 -> dado = 12;

  le -> prox = d1;// cabeçss l

  d1 -> prox = d2;
  d2 -> prox = d3;
  d3 -> prox = d4;
  d4 -> prox = d5;
  d5 -> prox = d6;
  d6 -> prox = d7;
  d7 -> prox = NULL;

  imprime_rec (le);
  divide_lista (le, l1, l2);
  imprime_rec (l1);
  imprime_rec (l2);
  imprime_rec(le);

  free(d1);
    free(d2);
      free(d3);
        free(d4);
          free(d5);
            free(d6);
                free(d7);
                  free(le);
                    free(l1);
                      free(l2);
  return 0;
}
