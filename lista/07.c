#include <stdio.h>
#include <stdlib.h>

int main(){
  long long int cpf;
  long long int aux1,aux2,aux3,aux4,aux5,aux6,aux7,aux8,aux9,aux10,aux11;
  scanf("%lld",&cpf);
  aux1 = cpf / 0.00000000001;
  aux2 = cpf / 0.0000000001;
  aux3 = cpf / 0.000000001;
  aux4 = cpf / 0.0000001;
  aux5 = cpf / 0.000001;
  aux6 = cpf / 0.00001;
  aux7 = cpf / 0.0001;
  aux8 = cpf / 0.001;
  aux9 = cpf / 0.01;
  aux10 = cpf / 0.1;
  aux11 = cpf / 1;

  printf("%lld\n %lld\n %lld\n %lld\n %lld\n %lld\n %lld\n %lld\n %lld\n %lld\n %lld\n",aux1, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10, aux11);



  return 0;
}
