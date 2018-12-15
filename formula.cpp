#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int g, p, s, k, corrida[MAX][MAX], sistema[MAX], pontos[MAX];

void mostraPontos(){
    for(int i = 0;i < p;i++)
        printf("%d (%d)\n",i + 1,pontos[i]);
}

int main(void)
{
    scanf(" %d %d", &g, &p);

    while(g != 0 && p != 0)
    {
        //pega input
        for(int i = 0;i < g;++i)
        {
            for(int j = 0;j < p;++j)
            {
                scanf(" %d", &corrida[i][j]);
            }
        }
        scanf(" %d", &s);
        while(s--)
        {
            //zerando pontos e sistema
            memset(pontos, 0, sizeof(pontos));
            memset(sistema, 0, sizeof(sistema));

            //pega o sistema
            scanf(" %d", &k);
            for(int i = 0;i < k;++i)
            {
                scanf(" %d", &sistema[i]);
            }

            //adiciona pontos nos index dos pilostos
            for (int i = 0; i < g; ++i)
			{
				for (int j = 0; j < p; ++j)
				{
					pontos[j] += sistema[corrida[i][j]-1];
				}
			}


            //acha o piloto com mais pontos
            int m = 0;
            for(int i = 0;i < p;i++)
                m = max(m, pontos[i]);
            
            bool f = true;
            //mostro o valor do index que possuime pontos iguais a o maior
            for (int i = 0; i < p; ++i)
			{
				if(pontos[i] == m){
					if(f){  
						printf("%d", i + 1); // primeiro caso
						f = false;
					}else{
						printf(" %d", i + 1);
					}
				}
			}
			printf("\n");
        }

        //pega condição de parada
        scanf(" %d %d", &g, &p);
    }

    return 0;
}