#include<stdio.h>
#include<math.h>
int n;
double x;

int main(){
    scanf(" %d", &n);

    for(int i = 0;i < n;i++){
        scanf(" %lf", &x);
        printf("%.4lf\n", pow(x,0.5));
    }

    return 0;
}