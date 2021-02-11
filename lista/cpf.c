#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned long long int c, aux = 0;
  int soma = 0, d1, d2;
  scanf("%llu", &c);

  aux = c / 100;

    for (int i = 2; i < 11; i++){
       soma += (aux % 10) * i;
        aux /= 10;
    }



    d1 = soma%11;
    d1 = 11 - d1;

    if (d1 > 9){
      d1 = 0;
    }

    int dd1 = (c/10)%10;

    if(d1 != dd1){
      printf("invalido\n");
      return 0;
    }

    aux = c /10;
    soma = 0;

    for (int i = 2; i < 12; i++){
       soma += (aux % 10) * i;
        aux /= 10;
    }

    d2 = soma%11;
    d2 = 11 - d2;

    if(d2>9)
  		d2 =0;
    int dd2 = (c%10);
  	if(d2!=dd2){
  		printf("invalido\n");
  		return 0;
  	}

  	printf("valido\n");






  return 0;
}
