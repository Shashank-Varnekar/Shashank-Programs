#include<bits/stdc++.h>
using namespace std;

int main()
{
    int R, O, C;
    cin >> R >> O >> C;
    int x = 20 - O;
    int score = (x * 36) + C;
    cout << score<< endl;
    if(score > R)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}