#include <stdio.h>

int somador(char *s, int i){
if(s[i] == '\0'){
return 0;
}else{
return (s[i] - 48) + somador(s, i + 1);
}
}

int somador2(int i){
if(i / 10 == 0){
return i;
}else{
return (i % 10) + somador2(i / 10);
}
}

int divisor(int i){
int valor = 0;

if(i < 9){
return 0;
}else if(i == 9){
return 1;
}else{
valor = divisor(somador2(i));

if(valor == 0){
return 0;
}else{
return valor + 1;
}
}
}


int main(){

int i = 0, divisao = 0, soma = 0, calculo;

while(1){
char entrada[1000];
scanf("%s", entrada);

if(entrada[0] == '0'){
break;
}else{

soma = somador(entrada, i);
divisao = divisor(soma);

if(divisao == 0){
printf("%s is not a multiple of 9.\n", entrada);
}else{
printf("%s is a multiple of 9 and has 9-degree %d.\n", entrada, divisao);
}
}
}
return 0;
}
