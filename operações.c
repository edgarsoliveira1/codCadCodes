#include <stdio.h>
char operacao;
double a, b;

int main(){
    scanf(" %c %lf %lf", &operacao, &a, &b);
    printf("%.2lf\n", (operacao == 'M'? a * b : a / b));
}