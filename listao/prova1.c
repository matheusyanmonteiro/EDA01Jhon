#include <stdio.h>
#include <stdlib.h>

int *vetor_dinamico (int n){
  int *v;
  v = calloc (n, sizeof(int));
  if (v == NULL)
    exit(EXIT_FAILURE);
  return v;
}


int main() {
  int d, ano, semestre, qtdmateria, codigo, qtdaluno, reprovacao;
  int *ptr;
  int aux = 0, espaco = 0;
  int maior;

  scanf ("%d", &d);
  ptr = vetor_dinamico(d);

  while (scanf("%d %d %d", &ano, &semestre, &qtdmateria) != EOF){
    aux = 0;

    for (int i = 0; i < d; i++)
      ptr[i] = 0;

    for (int i = 0; i < qtdmateria; i++) {
      scanf("%d %d %d", &codigo, &qtdaluno, &reprovacao);
      ptr[codigo] += (qtdaluno - reprovacao);
    }

    for (int i = 0; i < d; i++) {
      if (aux == 0){
        aux = 1;
        maior = ptr[i];
      } else {
        if (ptr[i] > maior)
        maior = ptr[i];
      }
    }
    printf("%d/%d\n", ano, semestre);
    espaco = 0;
    for (int i = 0; i < d; i++) {
      if((ptr[i] == maior) && (espaco = 0)) {
        printf("%d", i);
        espaco = 1;
      } else if (ptr[i] == maior){
        printf("%d ", i);
      }
    }
    printf("\n\n");

  }
  free(ptr);
  return 0;
}
