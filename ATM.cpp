#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    float Y;
    cin >> X >> Y;
    float Bal = Y;
    if(X>0 && Y>0){
        if(X%5 == 0){
            if(X+0.5 > Y)
                cout << fixed << setprecision(2) << Bal << endl;
            else{
                Bal = abs(Y - X - 0.50);
                cout << fixed <<setprecision(2) << Bal << endl;
            }
        }
        else
            cout << fixed <<setprecision(2) << Bal << endl;
    }
    return 0;
}