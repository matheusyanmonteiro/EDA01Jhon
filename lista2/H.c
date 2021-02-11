#include <stdio.h>
#include <stdlib.h>


int main() {
  int qtdrotulos, balas;
  int vetor[1001];
  int minimo_envelopes;
  int rotulo;
  int soma = 0;

  scanf ("%d %d", &qtdrotulos, &balas);

  minimo_envelopes = qtdrotulos / balas;

  for (int i = 1; i <= qtdrotulos; i++) {
    vetor[i] = 0;
  }

  for (int i = 1; i <= qtdrotulos; i++) {
    scanf("%d",&rotulo);
    vetor[rotulo] ++;
  }

  for (int i = 1; i <= qtdrotulos; i++){
    soma += (vetor[i] / minimo_envelopes);
  }

  if (soma > minimo_envelopes) {
    printf("%d\n",soma);
  }else{
    printf("%d\n",soma);
  }







  return 0;
}
