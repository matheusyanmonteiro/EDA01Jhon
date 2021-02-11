#include <stdio.h>
#include <stdlib.h>

  int main() {
    int tam, media;
    int soma = 0;
    int aux = 0;

    scanf("%d", &tam);

    int vetor[tam];

    for (int i = 0; i < tam; i++) {
      scanf ("%d", &vetor[i]);
      soma += vetor[i];
    }

    media = soma / tam;

    for (int i = 0; i < tam; i++) {
        if((vetor[i] > media) && (aux == 0)) {
            printf("%d", vetor[i]);
            aux = 1;
        }else if(vetor[i] > media) {
          printf(" %d", vetor[i]);
        }
    }

    if (aux == 0)
      printf("%d", aux);

    printf("\n");

    return 0;
  }
