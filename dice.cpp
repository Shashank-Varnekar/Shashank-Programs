#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int N;
        int res = 0;
        cin >> N;
        if(N == 1)
            cout << 20 << endl;
        else if(N == 2)
            cout << 40 << endl;
        else if(N == 3)
            cout << 51 << endl;
        else if(N == 4)
            cout << 60 << endl;
    }
    return 0;
}