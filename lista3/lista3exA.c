#include <stdio.h>

void regua(int n){
    if (n == 0)
        return;
    else{
        regua(n - 1);
        printf (".");

        int i;
        for(i = 0; i < n; i ++){
            printf("-");
        }

        printf("\n");

        regua(n - 1);
    }
}

int main(){
    int n;

    scanf ("%d", &n);

    regua(n);

    return 0;
}