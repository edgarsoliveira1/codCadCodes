#include <bits/stdc++.h>
using namespace std;
string n, result;
int soma, primeiroDigito;

int main()
{
    //pega dados
    cin >> n;

    //pega o primeiro digito do numeor
    primeiroDigito = n[n.length()-1] - '0';
    //soma todo os digito do numero
    for(int i = 0;i < n.length();++i) //O(n)
    {
        soma += n[i] - '0';
    }

    //monta saida
    result += primeiroDigito % 2 == 0 ? "S\n":"N\n";
    result += soma % 3 == 0 ? "S\n":"N\n";
    result += (primeiroDigito % 5 == 0 || primeiroDigito == 0) ? "S\n":"N\n";
    cout << result;
    return 0;
}