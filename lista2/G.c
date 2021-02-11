#include <stdio.h>
#include <stdlib.h>

  int main () {

    int a, v, auxA, auxV, espaco;
    int contador = 0;
    int maior = 0;
    int vetor[101];


    scanf ("%d %d", &a, &v);

    while ((a != 0) && (v != 0)) {

      contador++;

      for (int i = 1; i <= a; i++)
        vetor[i] = 0;

      for (int i = 1; i <= v; i++) {
        scanf("%d %d", &auxA, &auxV);
         vetor[auxA] ++;
         vetor[auxV] ++;
      }

      for (int i = 1; i <= a; i++) {
         if (vetor[i] >= maior)
           maior = vetor[i];
      }

      printf("Teste %d\n",contador);
      espaco = 0;
      for (int i = 1; i <= a; i++){
        if ((vetor[i] == maior) && (espaco = 0)) {
          printf("%d ",i);
          espaco = 1;
        } else if (vetor[i] == maior) {
          printf("%d ",i);
        }
      }
      printf("\n\n");
      maior = 0;
      scanf ("%d %d", &a, &v);
    }


    return 0;
  }
