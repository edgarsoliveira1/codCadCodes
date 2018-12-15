#include <iostream>
int n, x[1000][1000], maiorLinha, numeroMaiorLinha, maiorColuna, numeroMaiorColuna;

int torre(int a, int b){
    int result = 0;
    //buscando na maior coluna
    for(int i = 0;i < n;i++){
        int coluna = 0, linha = 0;
        for(int j = 0;j < n;j++){
            coluna += x[i][j];
            linha += x[j][i];
        }
        int t1 = (coluna + maiorLinha) - (2 * x[b][i]);
        int t2 = (linha + maiorColuna) - (2 * x[i][a]);
        if(t1 > result)
            result = t1;
        if(t2 > result)
            result = t2;
    }
    return result;
}

int main (){
    // pega dados
    scanf(" %d", &n);
    for(int i = 0;i < n;i++){
        int coluna = 0;
        for(int j = 0;j < n;j++){
            scanf(" %d", &x[i][j]);
            coluna += x[i][j];
        }
        //acha a coluna com a maior soma
        if(coluna > maiorColuna){
            maiorColuna = coluna;
            numeroMaiorColuna = i;
        }
    }

    //acha a linha com a maior soma
    for(int i = 0;i < n;i++){
        int linha = 0;
        for(int j = 0;j < n;j++){
            linha += x[j][i];
        }
        if(linha > maiorLinha){
            maiorLinha = linha;
            numeroMaiorLinha = i;
        }
    }
    printf("%d\n", torre(numeroMaiorLinha,numeroMaiorColuna));

    return 0;
}