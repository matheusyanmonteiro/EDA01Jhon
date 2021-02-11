#include <stdio.h>

int somador(char *string){
  int soma = 0;
  if(string[0] == '\0'){
    return 0;
  }else {
    while (*string != '\0'){
      soma += (*string) - '0';
      string++;
    }
    return soma;
  }
}

int somador2(int i){
  if(i / 10 == 0){
  return i;
  }else{
    return (i % 10) + somador2(i / 10);
  }
}

int divisor(int i){
int valor = 0;

  if(i < 9){
    return 0;
  }else if(i == 9){
    return 1;
  }else{
      valor = divisor(somador2(i));

      if(valor == 0){
        return 0;
    }else{
      return valor + 1;
    }
  }
}

int main(){

int i = 0, divisao = 0, soma = 0;

while(1){
char numero[1000];
scanf("%s", numero);

if(numero[0] == '0'){
break;
}else{

soma = somador(numero);
divisao = divisor(soma);

if(divisao == 0){
printf("%s is not a multiple of 9.\n", numero);
}else{
printf("%s is a multiple of 9 and has 9-degree %d.\n", numero, divisao);
}
}
}
return 0;
}
