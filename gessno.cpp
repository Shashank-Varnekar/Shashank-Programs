#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        for(int i=1; i<=1000; i++){
            cout << i*i << endl;
            int n;
            cin >> n;
            if(n == 1)
                break;
            else if(n == -1)
                break;
            else
                continue;
        }
    }
    return 0;
}