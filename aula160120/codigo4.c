#include <stdio.h>

int main(){
  int arr[] = { 9, 8, 98, 88, 87, 1 ,2 ,4, 101, 102, 103, 105};
  int *x = arr+4;
  int *ptr = &arr[7];

  arr[*ptr]++;
  printf("Valor 1: %d\n",*ptr );
  printf("Valor 2: %d\n", *x );
  *x = 7;
  printf("Valor 3 %d\n\n", arr[4] + *ptr );
  return 0;
}
