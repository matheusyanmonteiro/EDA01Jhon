#include <stdio.h>
#include <stdlib.h>

int main(){
  int av[100],v,a;
  for(int i = 0; i < 100; i++){
    av[i]=0;
  }
  while(a!= 0 && v!=0){
    scanf("%d %d", &a, &v);
    av[a]+=v;
  }
  for(int i = 0; i < 100; i++){
    //comparar qual posição é o que tem mais numeros
  }

  return 0;
}
