#include <stdio.h>
#include <stdlib.h>

int main() {
  double salrio, porctalmento, totalaumento, totalsalario;
  scanf("%lf %lf", &salrio, &porctalmento);
  totalaumento = salrio * (porctalmento / 100);
  totalsalario = salrio + totalaumento;

  printf("%.2lf %.2lf\n",totalaumento,totalsalario);


  return 0;
}
