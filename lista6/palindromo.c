#include <stdio.h>
#include <stdlib.h>

#include <string.h>

char *vetor_dinamico (int n){
  char *v;
  v = calloc (n, sizeof(char));
  if (v == NULL)
    exit(EXIT_FAILURE);
  return v;
}

int palindromo( char *str){
  size_t len = strlen(str);

  for (int i = 0, j = len - 1; i < j; i++, j--)
    if (str[i] != str[j])
      return 0;
    else
      return 1;

}

int main () {
  int n;
  char *nome;
  scanf("%d",&n);
  nome = vetor_=dinamico(n);

  scanf("%s",nome);

  printf("%d\n", palindromo(nome));


  return 0;
}
