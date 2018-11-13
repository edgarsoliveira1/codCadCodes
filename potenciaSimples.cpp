#include<stdio.h>
#include<math.h>

double x, y;

int main(){
    scanf(" %lf %lf", &x, &y);

    printf("%.4lf\n", pow(x, y));

    return 0;
}