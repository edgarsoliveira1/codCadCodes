#include <stdio.h>
#include <string.h>
char in[50], out[50];

int main(){
    // lendo entrada
    scanf(" %s", in);
    
    //filtrando vogais
    for(int i = 0, j = 0;i < strlen(in);i++){
        if(in[i] == 'a' || in[i] == 'e' || in[i] == 'i' || in[i] == 'o' || in[i] == 'u'){
            out[j] = in[i];
            j++;
        }
    }
    //verifica se as vogais são igual com a palavra reversa
    for(int i = 0, j = (strlen(out) - 1); i < strlen(out), j >= 0;i++, j--){
        if(out[i] != out[j]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}