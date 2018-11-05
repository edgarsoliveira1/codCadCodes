#include <stdio.h>
#include <string.h>
char s[2][80];
int n, count;

int main(){

    scanf(" %d %s %s", &n, s[0], s[1]);
    for(int i = 0;i < n;i++){
        if(s[0][i] == s[1][i])
            count++;
    }
    printf("%d\n",count);
}