#include <stdio.h>
#include <stdlib.h>

int main() {
  int c, turma;
  int i;
  int contador = 0;
  scanf("%d %d",&c,&turma);
  while(turma != 0){
    if (turma > (c-1)){
        for(i = 1; i < c; i++)
        turma --;
        contador++;
    }else  if(turma < c){
      contador ++;
      turma = 0;

  }
  }
  printf("%d\n",contador);

  return 0;
}
