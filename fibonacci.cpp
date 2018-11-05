#include <stdio.h>
int x;

int fib(int a){
    if(a == 1 || a == 0)
        return a;
    return (fib(a - 1) + fib(a - 2));
}

int main(){

    scanf(" %d", &x);
    printf("%d\n",fib(x+1));

    return 0;
}