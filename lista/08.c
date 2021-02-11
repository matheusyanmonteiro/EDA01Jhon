#include <stdio.h>
#include <stdlib.h>

  int main() {

    int conta;
    int soma = 0;

    scanf ("%d", &conta);

    if (conta <= 10) {
      printf("%d\n", soma + 7);
    }
    if (conta > 10) {
      while (conta != 10) {
        if (conta >= 101)
          soma += 5;

        if ((conta >= 31) && (conta < 101))
          soma += 2;

        if ((conta >= 11) && (conta < 31))
          soma +=1;

       conta --;
      }
      
      printf("%d\n", soma + 7);
    }

    return 0;
  }
