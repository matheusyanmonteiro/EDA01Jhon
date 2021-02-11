#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, aux = 0, i,j;
  scanf("%d",&a);

  for (i = 0; i < a; i++){
    aux++;
    printf("%.2d",aux);
    for (j = 0; j < i; j++){
    printf(" %.2d",aux);
  }
  printf("\n");
 }

 aux = 0;
 for (i = 0; i < a+1; i++){
   aux++;
   for (j = 1; j <= i; j++){
     if(j == 1){
       printf("%.2d",j);
     }else{
   printf(" %.2d",j);
 }
}
 printf("\n");
}

  return 0;
}
