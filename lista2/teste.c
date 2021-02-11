
typedef struct tipoData{
  int dia;
  int mes;
  int ano;
}tipoData;

typedef struct tipoPessoa{
  char nome[80];
  tipoData dtNascimento;
}tipoPessoa;

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){

 tipoPessoa p;
 int i=0;

 p.dtNascimento.ano = dt_nascimento/10000;
 p.dtNascimento.mes = (dt_nascimento/100)%100;
 p.dtNascimento.dia = dt_nascimento%100;

 while(nome[i]!='\0'){
 	p.nome[i] = nome[i];
 	i++;
 }
 p.nome[i] = nome[i];

 return p;
}
