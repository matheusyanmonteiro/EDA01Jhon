#include <stdio.h>
#include <stdlib.h>

int main () {
  int numero, maior;
  int aux = 0;

  while ((scanf ("%d", &numero)) != EOF) {
    if (aux == 0){
      aux = 1;
      maior = numero;
    }else{
      if(numero > maior){
        maior = numero;
      }
    }
  }

  printf("%d\n", maior);
  return 0;
}
