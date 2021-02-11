#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void remove_depois (celula *p){
  if (p -> prox != NULL){


  celula *tmp = p -> prox;
  //int dado = p -> prox -> dado;
  p -> prox = tmp -> prox;
  free(tmp);
  //return dado;
  }
}

void remove_elemento ( celula *le, int x){
  celula *p;
 if (le != NULL) {
    if (le -> dado == x) {
      p = le;
      le = le -> prox;
      free(p);
    } else {
      for (p = le; p -> prox != NULL && p -> prox -> dado != x; p = p -> prox);
        if (p -> prox != NULL) {
          celula *tmp = p -> prox;
          p -> prox = tmp -> prox;
          free (tmp);
        }
    }
  }
}
//por algum motivo essa incrivel funcao ta desalocando todo mundo, se tiver no if só um =.
void remove_todos_elementos (celula *le, int x){
  celula *p = le;
  while (p -> prox != NULL){
    if (p -> prox -> dado == x) {
      celula *aux;
      aux = p -> prox;
      p -> prox = aux -> prox;
      free (aux);
    } else {
      p = p -> prox;
    }
  }
}
/*

void *imprime_rec (celula *le) {
  if (le -> prox == NULL){
  printf("NULL\n");
  }
  else{
    printf ("%d - > ", le -> prox -> dado);
    imprime_rec (le -> prox);
  }
}

int main () {

  celula *p = malloc (sizeof(celula));
  celula *q = malloc (sizeof(celula));
  celula *r = malloc (sizeof(celula));
  celula *s = malloc (sizeof(celula));
  celula *n = malloc (sizeof(celula));
  q -> dado = 2;
  r -> dado = 23;
  s -> dado = 12;
  n -> dado = 2;

  p -> prox = q;
  q -> prox = r;
  r -> prox = s;
  s -> prox = n;
  n -> prox = NULL;

  imprime_rec (p);
  remove_elemento(p,2);
//  remove_todos_elementos (p, 2);
//  imprime_rec (p);
  //remove_depois(r);
  imprime_rec(p);

  return 0;
}
*/
