#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        int weight = w2 - w1;
        if(weight < x1 * M || weight > x2 * M)
            cout << "0" << endl;
        else if(weight == x1 * M || weight <= x2 * M)
            cout << "1" << endl;
    }
    return 0;
}