#include <stdio.h>
int n, quadro[10][10], numeroMagico, linha, coluna, diagonal1, diagonal2;

int main(){

    //recebendo entrada
    scanf(" %d", &n);
    for(int i = 0;i < n;i++){
        linha = 0;
        for(int j = 0;j < n;j++){
            scanf(" %d", &quadro[i][j]);
            //pega linha
            linha += quadro[i][j];

            //pega as diagonais
            if(j == i){
                diagonal1 += quadro[i][j];
            }
            if((j + i) == (n - 1))
                diagonal2 += quadro[i][j];

            //pega numeroMagico
            if(i == 0)
                numeroMagico += quadro[0][j];
        }

        if(linha != numeroMagico){
            printf("-1\n");
            return 0;
        }
    }

    for(int i = 1;i < n;i++){
        coluna = 0;
        for(int j = 0;j < n;j++){
            coluna += quadro[j][i];
        }
        if(coluna != numeroMagico){
            printf("-1\n");
            return 0;
        }
    }

    if(diagonal1 != numeroMagico){
        printf("-1\n");
        return 0;
    }else if (diagonal2 != numeroMagico){
        printf("-1\n");
        return 0;
    }else{
        printf("%d\n", numeroMagico);
    }



    return 0;
}