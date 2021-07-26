#include<bits/stdc++.h>
using namespace std;

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        long long int C, A, B, bin;
        cin >> C;
        bin = convert(C);
        long int d = 0;
        while(bin!=0)  
        {  
            bin = bin/10;  
            d++;  
        }
        long int max = pow(2, d) - 1;
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