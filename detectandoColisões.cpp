#include <bits/stdc++.h>
using namespace std;
int x[4], y[4], tmp;

int main()
{
    cin >>  x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
  
    if((x[2] >= x[0] && x[2] <= x[1]) || (x[1] >= x[2] && x[1] <= x[3]))
        if((y[2] >= y[0] && y[2] <= y[1]) || (y[1] >= y[2] && y[1] <= y[3]))
        {
            cout << "1\n";
            return 0;
        }

    cout << "0\n";
    return 0;
}