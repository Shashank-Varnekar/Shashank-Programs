#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        long long int C, A, B;
        cin >> C;
        long int d = 0;
        long int max = 0;
        while(max < C){
            d++; 
            max = pow(2, d)-1;
        }
        long int ans = 0;
        for(A=1; A<=max; A++){
            B = A ^ C;
            if(A ^ B == C){
                if(A*B > ans){
                    ans = A*B;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}