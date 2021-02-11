#include <stdio.h>
#include <stdlib.h>


int main(){
  double salario, finalsalario;
  scanf("%lf",&salario);
  finalsalario = salario + (salario * 0.25);
  printf("novo salario: %.2lf\n",finalsalario);

  return 0;
}
