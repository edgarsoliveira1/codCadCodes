#include <iostream>
using namespace std;

int n, x, y, z, menor, maior,total;

int main(void){

    // pega os dados
    scanf(" %d %d %d %d", &n, &x, &y, &z);
    // acha o pokemon que necessita do menos doce para evoluir
    menor = min(x, min(y, z));
    // acha o pokemon que necessita do mais doce para evoluir
    maior = max(x, max(y, z));
    total = x + y + z;

    printf(n >= total ? "3\n" : ( n >= (total - maior)? "2\n": (n >= menor ? "1\n" : "0\n") ) );

    return 0;
}