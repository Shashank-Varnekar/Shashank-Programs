#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, H, x;
    cin >> N >> H >> x;
    int T[N];
    int flag = 0;
    for(int i=0; i<N; i++){
        cin >> T[i];
    }
    for(int i=0; i<N; i++){
        if(x + T[i] == H){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}