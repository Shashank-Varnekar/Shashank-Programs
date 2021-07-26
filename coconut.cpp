#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        int A, B;
        A = Xa / xa;
        B = Xb / xb;
        int res = A + B;
        cout << res << endl;
    }
    return 0;
}