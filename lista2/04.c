#include <stdio.h>
#include <stdlib.h>

int main(){
  int x, y,z,contador = 0;
  scanf("%d",&x);
  int vetor[x];
  for(int i = 0; i < x; i++){
    scanf("%d",&y);
    vetor[i] = y;
  }
  scanf("%d",&z);

  for(int i = 0; i < x; i++){
    if(z == vetor[i])
      contador++;
    else {
    contador += 0;
  }
}

    if(contador > 0){
      printf("pertence\n");
    }else{
      printf("nao pertence\n");
    }


  return 0;
}
