#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        if(n%k == 0)
            cout << (n/k) << " " << k << endl;
        else
            cout << (n/k)+1 << " " << (n%k) << endl;
    }
    return 0;
}