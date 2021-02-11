#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y;
  scanf("%d",&x);
  int vetorA[x], vetorB[x], soma[x];

  for(int i = 0; i < x; i++){
    vetorA[i] = 0;
  }
  for(int i = 0; i < x; i++){
    vetorB[i] = 0;
  }
  for(int i = 0; i < x; i++){
    soma[i] = 0;
  }

  for(int i = 0; i < x; i++){
    scanf("%d",&y);
    vetorA[i] = y;
  }

  for(int i = 0; i < x; i++){
    scanf("%d",&y);
    vetorB[i] = y;
  }

  for(int i = 0; i < x; i++){
    soma[i] = vetorA[i] + vetorB[i];
  }

  for(int i = 0; i < x; i++){
    if( i == 0)
    printf("%d",soma[i]);
    else
    printf(" %d",soma[i]);
  }
  printf("\n");

  return 0;
}
