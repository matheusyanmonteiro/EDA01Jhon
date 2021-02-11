#include <stdio.h>
#include <stdlib.h>

int main(){
  int x, y;
  int auxpar = 0, auximp = 0;
  scanf("%d",&x);
  int vetorA[x];
  for(int i = 0; i < x; i++){
    scanf("%d",&y);
    if(y % 2 == 0){
        vetorA[i]=y;
        auxpar++;
    }else{
      vetorA[i] = y;
      auximp++;
    }
  }

  int vetpar[auxpar], vetimp[auximp];
  int par = 0, impar = 0;

  for(int i = 0; i < x; i++){
    if(vetorA[i] % 2 == 0){
      vetpar[par] = vetorA[i];
      par++;
    }else{
      vetimp[impar] = vetorA[i];
      impar++;
    }
  }

  for(int i = 0; i < auxpar; i++){
    if(i == 0){
      printf("%d",vetpar[i]);
    }else{
      printf(" %d",vetpar[i]);
    }
  }
  printf("\n");
  for(int i = 0; i < auximp; i++){
    if(i == 0){
      printf("%d",vetimp[i]);
    }else{
      printf(" %d",vetimp[i]);
    }
  }
  printf("\n");

  return 0;
}
