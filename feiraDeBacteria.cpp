#include <iostream>
#include <cmath>
int n, d, c, melhor;
double rendimentoDaBacteria, maior;

int main (){
    scanf(" %d", &n);

    for(int i = 0;i < n;i++){
        scanf(" %d %d", &d, &c);
        rendimentoDaBacteria = c * log(d);
        if(rendimentoDaBacteria > maior){
            maior = rendimentoDaBacteria;
            melhor = i;
        }
    }
    printf("%d\n", melhor);

    return 0;
}