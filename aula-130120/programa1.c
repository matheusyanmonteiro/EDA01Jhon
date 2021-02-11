#include <stdio.h>

  struct test{
    char a;
    int b;
    float c;
  };

  int main(){

    int array[20];/*size of (array)*/

    printf ("TAMANHOS:\n");
    printf ("\t char: %ld \n", sizeof(char));
    printf ("\t short: %ld \n", sizeof(short));
    printf ("\t int: %ld \n", sizeof(int));
    printf ("\t long int: %ld \n", sizeof(long int));
    printf ("\t float: %ld \n", sizeof(float));
    printf ("\t double: %ld \n", sizeof(double));
    printf ("\t long double: %ld \n", sizeof(long double));
    printf ("\t array: %ld \n", sizeof(array));
    printf ("\t struct: %ld \n", sizeof(struct test));

    return 0;
  }
