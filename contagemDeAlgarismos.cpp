#include <stdio.h>
#include <string.h>
int n, numeroDe[10];
char s [50];

int main(){

    //lendo dados
    scanf(" %d", &n);
    for(int i = 0;i < n;i++){
        scanf(" %s", s);
        for(int j = 0;j < strlen(s);j++){
            if(s[j] == '0'){
                numeroDe[0]++;
            }else if(s[j] == '1'){
                numeroDe[1]++;
            }else if(s[j] == '2'){
                numeroDe[2]++;
            }else if(s[j] == '3'){
                numeroDe[3]++;
            }else if(s[j] == '4'){
                numeroDe[4]++;
            }else if(s[j] == '5'){
                numeroDe[5]++;
            }else if(s[j] == '6'){
                numeroDe[6]++;
            }else if(s[j] == '7'){
                numeroDe[7]++;
            }else if(s[j] == '8'){
                numeroDe[8]++;
            }else if(s[j] == '9'){
                numeroDe[9]++;
            }
        }
    }

    for(int i = 0;i < 10;i++){
        printf("%d - %d\n", i, numeroDe[i]);
    }

    return 0;
}