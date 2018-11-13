#include <stdio.h>
# define MAX 10000
int n, x[MAX][MAX], linhasEcolunas [2][MAX], maior;


int main(){
    // recebe dados
    scanf(" %d", &n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf(" %d", &x[i][j]);
        }
    }
    /*
        calcula o a soma de todas as linhas
        e coluna no array linhas e colunas
    */
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            linhasEcolunas[0][i] += x[i][j];
            linhasEcolunas[1][i] += x[j][i];
        }
    }

    	/*
        coma cada linha com cada coluna, subtrai a 
        intersecção, compara como maior e atualiza
        o maior se for nessecario
    	*/
    	/*
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                int atual = linhasEcolunas[0][i] + linhasEcolunas[1][j] - (x[i][j] * 2);
                if(atual > maior)
                    maior = atual;
                
            }
        }
	*/



    printf("%d\n",maior);

    return 0;
}