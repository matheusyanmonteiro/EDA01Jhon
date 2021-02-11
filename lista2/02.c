/*#include <stdio.h>
#include <stdlib.h>
*/
int encaixa(int a, int b){
  if(a == b)
  return 1;

  while( b!= 0 && a % 10 == b % 10){
    a = a/10;
    b = b/10;
  }
  if (b == 0)
    return 1;
  else
    return 0;

}
/*
int main() {
  int x, y;
    scanf("%d %d",&x, &y);
    printf("%d",encaixa(x,y));


  return 0;
}
*/
