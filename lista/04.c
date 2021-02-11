#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, aux = 0, m;

  while(scanf("%d",&a) != EOF){


    if(aux == 0){
        aux = 1;
         m = a;
    }

    else{
        if(a > m)
        m = a;
    }
  }
  printf("%d\n",m);

  return 0;
}
