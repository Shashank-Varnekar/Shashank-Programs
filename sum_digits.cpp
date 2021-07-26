#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        int sum = 0;
        while(N != 0){
            int d = N%10;
            N = N / 10;
            sum += d;
        }
        cout << sum << endl;
    }
    return 0;
}