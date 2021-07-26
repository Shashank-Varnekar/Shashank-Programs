#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int A, B, rem = 0;
    while(T--){
        cin >> A >> B;
        rem = A % B;
        cout << rem << endl;
    }
    return 0;
}