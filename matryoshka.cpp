#include <iostream>
#include <algorithm>
using namespace std;
int n, x[100000], xs[100000], result[100000], j;


int main(){
    //pega dados
    scanf(" %d", &n);
    for(int i = 0;i < n;i++){
        scanf(" %d", &x[i]);
        //faz uma copia do vetor
        xs[i] = x[i];
    }

    //ordena a copia do vetor
    sort(xs, xs + n);
    //compara a copia ordenada com o vetor original
    for(int i = 0;i < n;i++){
        if(x[i] != xs[i]){
            result[j] = x[i];
            j++;
        }
    }

    //ordena os valores diferente entre a copia e o vetor
    sort(result, result + j);
    
    //mostra resultado
    printf("%d\n", j);
    if(j != 0){
    printf("%d", result[0]);
    for(int i = 1;i < j;i++){
        printf(" %d", result[i]);
    }
    printf("\n");
    }

    return 0;
}