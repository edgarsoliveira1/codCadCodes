#include<stdio.h>

int n, lista[10000];

int satura(int x){
    return x < 9 ? x : 9;
}

int distancia(int x){
    for(int i = x, j = x;i < n || j >= 0;i++, j--){
        if(lista[i] == 0 && i < n){
            return (i - x);
        }else if(lista[j] == 0 && j >= 0){
            return (x - j);
        }
    }
}

int main(){
    scanf(" %d", &n);

    for(int i = 0;i < n;i++){
        scanf(" %d", &lista[i]);
    }


    for(int i = 0;i < (n - 1);i++){
        if(lista[i] == -1){
            printf("%d ",satura(distancia(i)));
        }else{
            printf("0 ");
        }
    }
    printf("%d\n",satura(distancia(n-1)));

    return 0;
}