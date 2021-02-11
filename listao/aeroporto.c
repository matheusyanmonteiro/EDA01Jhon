#include <stdio.h>
#include <stdlib.h>
// função que aloca dinamicamente uma variavel.
int *constroi_vetor(int n){
  int *v;
  v = calloc (n, sizeof(int));
  if (v == NULL)
  exit(EXIT_FAILURE);
  for (int i = 0; i < n; i++)
  v[i];
  return v;
}
// função que define o maior termo do vetor.
int define_maior(int *ptr, int tam){
  int m;
  for (int i = 1; i <= tam; i++){
    if (i == 1) {
      m = ptr[i];
    }else if (ptr[i] > m){
      m = ptr[i];
    }
  }
  return m;
}


int main() {
// declaração de variaveis
  int a, v;
  int x, y;
  int *ptr;
  int contador = 0;
  int maior;
  int espaco;
// estanciando as variaveis a e v.
  scanf ("%d %d", &a, &v);

  while ((a != 0) && (v != 0)){
    contador++;// contador para fazer os casos de teste

    ptr = constroi_vetor(a); // chama a função de alocação dinamica

    for (int i = 1; i <= v; i++){ // alimenta o vetor alocado dinamicamente
      scanf("%d %d", &x, &y);
      ptr[x] ++;
      ptr[y] ++;
    }

    maior = define_maior(ptr, a);


    printf ("Teste %d\n", contador); // printa o caso de teste
    espaco = 0;
    for (int i = 1; i <= a; i++) { // funcionalidade que vai imprimir todos os numeros maiores de voos
      if ((ptr[i] == maior) && (espaco = 0)){
        printf ("%d", i);
        espaco = 1;
      }else if (ptr[i] == maior){
        printf ("%d ", i);
      }
    }
    printf ("\n\n");
    scanf ("%d %d", &a, &v); // restart do looping

  }

  free(ptr); // libera o espaço de memoria

  return 0;
}
