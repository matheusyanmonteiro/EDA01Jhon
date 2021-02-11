#include<stdio.h>
int main(){
	unsigned long long int cpf,aux;
	int soma=0,d1,d2,i=1;

	scanf("%llu",&cpf);

	aux = cpf/100;

	while(aux!=0){
		i++;
		soma+=(aux%10)*i;
		aux/=10;
	}

	d1 = soma%11;
	d1 = 11-d1;

	if(d1>9)
		d1 = 0;

	if(d1!=(cpf/10)%10){
		printf("invalido\n");
		return 0;
	}

	aux = cpf/10;
	i=1;
	soma=0;

	while(aux!=0){
		i++;
		soma+=(aux%10)*i;
		aux/=10;
	}

	d2 = soma%11;
	d2 = 11-d2;

	if(d2>9)
		d2 =0;

	if(d2!=cpf%10){
		printf("invalido\n");
		return 0;
	}

	printf("valido\n");

	return 0;
}
