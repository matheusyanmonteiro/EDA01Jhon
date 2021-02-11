#include <stdio.h>
#include <stdlib.h>

int main() {
  int nt1, nt2, nt3;
  float media;
  scanf("%d %d %d", &nt1, &nt2, &nt3);
  media = (float) (nt1 + nt2 + nt3)/3;

  printf("resultado: %.1f \n",media);

  return 0;
}
