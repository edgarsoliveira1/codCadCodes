#include <iostream>
#define MAX 100

// representa cada aluno
typedef struct aluno{
    int valor, bandeira;
} aluno;


// declara a variaveis que serão necessecarias
int n, a, b, total;
aluno m[MAX][MAX];
int d[5] = {0,1,0,-1,0};

// 'simila' a bolinha sendo passa da entra os aluno e conta as bandeiras
int bolinha(int x, int y){
    int x2, y2;

    // leventa a bandeira
    total += 1;
    m[x][y].bandeira = 1;

    for(int i = 0;i < 4;i++){
        x2 = x + d[i]; y2 = y + d[i+1];
        if(x2 >= 0 && x2 < n && y2 >= 0 && y2 < n )
            if(m[x2][y2].valor >= m[x][y].valor && m[x2][y2].bandeira == 0)
                bolinha(x2, y2);
    }

}

int main(){
    //pega dados 
    scanf("%d %d %d", &n, &a, &b);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf(" %d", &m[i][j].valor);
            m[i][j].bandeira = 0;
        }
    }
    // inicia a passagem da bolhinha
    bolinha(a - 1, b - 1);
    printf("%d\n", total);
    return 0;
}