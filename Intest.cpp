#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll n , x;
    cin >> n >> x;
    ll input;
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> input;
        if(input % x == 0)
            count++; 
    }
    cout << count << endl;
    return 0;
}