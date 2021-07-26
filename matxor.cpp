#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int n, m, k;
        cin >> n >> m >> k;
        int x = k+n;
        int y = k+n+m;
        int num = x;
        for(int i=x+1; i<=y; i++){
            num = num ^ i;
        }
        cout << num << endl;
    }
    return 0;
}