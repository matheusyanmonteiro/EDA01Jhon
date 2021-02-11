#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void imprime (celula *le) {
  celula *p = le -> prox;
  while (p != NULL) {
    printf ("%d -> ", p -> dado);
    p = p -> prox;
  }
  printf ("NULL\n");
}

void imprime_rec (celula *le) {
  if (le -> prox == NULL)
    printf ("NULL\n");
  else {
    printf ("%d -> ", le -> prox -> dado);
    imprime_rec (le -> prox);
    //printf ("%d -> ", le -> prox -> dado); de trás para frente
  }
}

int main () {
  celula *c, *c1, *c2, *c3, *c4;
  //alocação dinamica.
  c = malloc (sizeof(celula));
  c1 = malloc (sizeof(celula));
  c2 = malloc (sizeof(celula));
  c3 = malloc (sizeof(celula));
  c4 = malloc (sizeof(celula));

  c1 -> dado = 1;
  c2 -> dado = 2;
  c3 -> dado = 3;
  c4 -> dado = 4;

  c -> prox  = c1;
  c1 -> prox = c2;
  c2 -> prox = c3;
  c3 -> prox = c4;
  c4 -> prox = NULL;

  imprime(c);
  imprime_rec(c);

  free(c);
  free(c1);
  free(c2);
  free(c3);
  free(c4);


  return 0;
}
