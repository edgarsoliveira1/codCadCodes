#include <iostream>

using namespace std;

string title(string F){
    if( F[0] > 96 && F[0] < 123)
        F[0] = (F[0] - 32);
    for(int i = 1; i < F.length();i++){
        if(F[i] > 64 && F[i] < 91)
            F[i] = (F[i] + 32);
        if(F[i-1] == ' ' && (F[i] > 96 && F[i] < 123)){
            F[i] = (F[i] - 32);
        }
    }
    return F;
}

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}