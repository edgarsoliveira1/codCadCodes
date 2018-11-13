#include <iostream>
#include <algorithm>
using namespace std;

typedef struct pais{
    int numero;
    int ouro;
    int prata;
    int bronze;
} pais;

int n, m, o, p, b;
pais paises[101];

bool func(pais a, pais b){
    if(a.ouro > b.ouro){
        return true;
    }else if(a.ouro < b.ouro){
        return false;
    }else if(a.prata > b.prata){
        return true;
    }else if(a.prata < b.prata){
        return false;
    }else if(a.bronze > b.bronze){
        return true;
    }else if(a.bronze < b.bronze){
        return false;
    }else if(a.numero < b.numero){
        return true;
    }else{
        return false;
    }
}

int main(){
    //pega dados
    scanf(" %d %d", &n, &m);
    for(int i = 0;i <= n;i++){
        paises[i].numero = i + 1;
    }
    //contanbilizando pontos
    for(int i = 0;i < m;i++){
        scanf(" %d %d %d", &o, &p, &b);
        paises[o-1].ouro += 1;
        paises[p-1].prata += 1;
        paises[b-1].bronze += 1;
    }

    //organizando os paises
    sort(paises, (paises+(n+1)),func);

    printf("%d",paises[0].numero);
    for(int i = 1;i < n;i++){
        printf(" %d",paises[i].numero);
    }
    printf("\n");

    return 0;
}