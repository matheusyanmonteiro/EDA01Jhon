#include <stdio.h>
#include <stdlib.h>

typedef struct datanasc{
  int dia;
  int mes;
  int ano;
};

typedef struct pessoa{
  char nome[80];
  datanasc datanasc;
};

void separaInfo(char nome[80], int idade){
  pessoa = nome;
  pessoa.datanasc = idade;

}

int main(){
  int i;
  char nome[80];

  separaInfo(nome, i);


  return 0;
}
