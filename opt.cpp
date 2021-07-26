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
        
        ll N;
        ll count = 0;
        cin >> N;
        
        ll arr[N];
        ll left_HCF[N];
        ll right_HCF[N];
        
        ll sum = 0;
        for (ll i = 0; i < N; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        if(N == 1 && sum != 0)
            cout << 1 << endl;
        
        else if(sum == 0)
            cout << 0 << endl;

        else{
            ll left = 0;
            left_HCF[0] = 0;
            for (ll i = 1; i < N; i++)
            {
                left = gcd(arr[i-1], left);
                left_HCF[i] = left;
            }
        
            ll right = 0;
            right_HCF[N-1] = 0;
            for (ll i = N-2; i >= 0; i--)
            {
                right = gcd(arr[i+1], right);
                right_HCF[i] = right;
            }
            ll GCD[N];
            for (int i = 0; i < N; i++){
                GCD[i] = gcd(left_HCF[i], right_HCF[i]);
            }
            ll ans = LLONG_MAX;
            for(int i=0; i<N; i++){
                count = (sum - arr[i]) / GCD[i] + 1;
                ans = min(ans, count);
            }
            cout << ans << endl;
        }
    }
    return 0;
}