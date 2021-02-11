#include <stdio.h>

int global = 0;

void pares(char *s, int i){

    if(s[i] == s[i + 2] && s[i] != '\0'){
        global++;
        return pares(s, i + 1);
    }
    else if(s[i] == '\0'){
        return ;
    }else{
        return pares(s, i + 1);
    }
}

int main(){

    int aux = 0;
    char string[200];
    scanf("%s", string);

    pares(string, aux);

    printf("%d\n", global);

    return 0;
}
