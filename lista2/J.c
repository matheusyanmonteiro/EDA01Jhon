#include <stdio.h>

int main(){
	char nome[100];
	char aux[100];
	int i=0,len=0;
	scanf("%[^\n]",&nome);
	while(nome[i]!=' '){
		if(nome[i]<97)
			nome[i]+=32;
		printf("%c",nome[i]);
		i++;
	}
	printf(".");
	while(nome[len]!='\0'){
		len++;
	}
	for(;nome[len]!=' ';len--);
	len++;
	while(nome[len]!='\0'){
		if(nome[len]<97)
			nome[len]+=32;
		printf("%c",nome[len]);
		len++;
	}
	printf("@unb.br\n");
	return 0;
}
