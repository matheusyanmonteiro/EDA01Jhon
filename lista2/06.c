#include <stdio.h>
#include <stdlib.h>

int main(){
  int x, y, soma = 0, media;
  int maiores = 0;
  scanf("%d",&y);
  int vetor[y];

  for(int i = 0; i < y; i++){
    scanf("%d",&vetor[i]);
    soma += vetor[i];
  }
  media = soma / y;

  int aux = 0;

  for(int i = 0; i < y; i++){
    if(vetor[i] > media){
      aux++;
    }
  }

  if(aux != 0){

for (int i = 0; i < y; i++){
  if (vetor[i] > media ){
  if(i == 0){
    printf("%d",vetor[i]);
  }else{
    printf("%d ",vetor[i]);
  }
}
}
}
  if(aux == 0){
    printf("%d",aux);
  }
printf("\n");




  return 0;
}
