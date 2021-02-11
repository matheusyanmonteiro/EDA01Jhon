#include <stdio.h>

int f(int n){
    if (n == 0)
        return 0;
    else if (n > 100)
            return n - 10;
    else if (n <= 100)
            return f(f(n + 11));  
}

int main (){
    int n;

    while (scanf ("%d", &n)){
        if (n != 0)
            printf("f91(%d) = %d\n", n, f(n));
        else
            break;
    }

    return 0;
}