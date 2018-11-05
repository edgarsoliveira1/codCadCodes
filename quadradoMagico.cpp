#include <stdio.h>
int n, d, c, maior = -1, result;

int main(){
    scanf(" %d", &n);
    for(int i = 0;i < n;i++){
        scanf(" %d %d", &d, &c);
        d = d * c;
        if(d > maior){
            maior = d;
            result = i;
        }
    }
    printf("%d\n", result);

    return 0;
}