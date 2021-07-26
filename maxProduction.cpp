#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, d, x, y, z;
    cin >> T;
    while(T--){
        cin >> d >> x >> y >> z;
        int way1 = x * 7;
        int way2 = y * d + z * (7-d);
        cout << max(way1, way2) << endl;
    }
    return 0;
}