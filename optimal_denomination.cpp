#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    ll T;
    cin >> T;
    while(T--){
        
        ll N, i;
        ll count = 0;
        cin >> N;
        
        ll arr[N];
        ll left_HCF[N];
        ll right_HCF[N];

        for (i = 0; i < N; i++){
            cin >> arr[i];
        }

        if(N == 1)
            cout << 1 << endl;

        else{ 
            ll left = 0;
            left_HCF[0] = 0;
            for (i = 1; i < N; i++)
            {
                left = gcd(arr[i-1], left);
                left_HCF[i] = left;
            }
        
            ll right = 0;
            right_HCF[N-1] = 0;
            for (i = N-2; i >= 0; i--)
            {
                right = gcd(arr[i+1], right);
                right_HCF[i] = right;
            }

            ll max_no = LLONG_MIN;
            ll GCD[N];
            for (i = 0; i < N; i++){
                GCD[i] = gcd(left_HCF[i], right_HCF[i]);
                max_no = max(max_no, GCD[i]);
            }
            
            ll loc = 0;
            for (i = 0; i < N; i++){
                if(GCD[i] == max_no)
                    loc = i;
            }

            arr[loc] = max_no;
            if(max_no != 0){
                for(i=0; i < N; i++){
                    count += arr[i] / max_no;
                }
            }
            else
                count = 0;
            cout << count << endl;
        }
    }
    return 0;
}