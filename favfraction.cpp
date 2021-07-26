#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        float a,b,x,y;
        cin >> a >> b >> x >> y;
        float frac = a / b;
        float fav_frac = x / y;
        int count = 0;
        jump:
        if(frac > fav_frac)
            cout << "-1" << endl;
        else if(frac == fav_frac)
            cout << count << endl;
        else{
            a++;
            b++;
            frac = a / b;
            count++;
            goto jump;
        }
    }
    return 0;
}