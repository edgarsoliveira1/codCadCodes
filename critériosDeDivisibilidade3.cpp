#include <bits/stdc++.h>
using namespace std;
string n, result;
int soma;

int main()
{
    cin >> n;

    for(int i = 0,atual = 0;i < n.length();++i) //O(n)
    {
        atual = n[i] - '0';
        soma = i % 2 == 0 ? soma += atual : soma -= atual;
    }
    cout << (soma % 11 == 0 ? "S\n" : "N\n");


    return 0;
}