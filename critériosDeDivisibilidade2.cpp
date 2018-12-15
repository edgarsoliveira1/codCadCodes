#include <bits/stdc++.h>
using namespace std;
string n, result;
int primeiro2Digitos, soma;

int main()
{
    cin >> n;
    primeiro2Digitos = (n[n.length()-1] - '0') + ((n[n.length()-2] - '0') * 10);
    for(int i = 0;i < n.length();++i) //O(n)
    {
        soma += n[i] - '0';
    }

    result += primeiro2Digitos % 4 == 0 ? "S\n" : "N\n";
    result += soma % 9 == 0 ? "S\n" : "N\n";
    result += primeiro2Digitos % 25 == 0 ? "S\n" : "N\n";

    cout << result;

    return 0;
}