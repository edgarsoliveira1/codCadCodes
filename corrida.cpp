#include <iostream>
#include <algorithm>
#define MAX 101
using namespace std;
typedef struct corredor{
    int numero, tempo;
}corredor;

int n, m, tempo;
corredor corredores[MAX];

bool fun(corredor a, corredor b){
    return a.tempo > b.tempo;
}

int main(void){
    scanf(" %d %d", &n, &m);

    for(int i = 0;i < n;i++){
        tempo = 0;
        for(int j = 0,in = 0;j < m;j++){
            scanf(" %d", &in);
            tempo += in;
        }
        corredores[i].numero = i + 1;
        corredores[i].tempo = tempo;
    }

    sort(corredores, corredores+MAX, fun);

    printf("%d\n%d\n%d\n", corredores[n-1].numero, corredores[n-2].numero, corredores[n-3].numero);

    return 0;
}