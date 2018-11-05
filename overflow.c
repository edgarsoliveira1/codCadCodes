#include <stdio.h>
char c;
int n, p, q;

int main(){
    scanf(" %d %d %c %d", &n, &p, &c, &q);
    printf(n < (c == '*'? p * q : p + q)? "OVERFLOW\n" : "OK\n");
}