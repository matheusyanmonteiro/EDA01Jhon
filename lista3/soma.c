#include <stdio.h>

long int soma(long int n) {
  if (n / 10 == 0){
    return n;
  }
  else return (soma (n / 10) + n %10);
}

int main() {
  long int x;
  scanf("%ld",&x);

  printf("%ld\n",soma(x));

  return 0;
}
