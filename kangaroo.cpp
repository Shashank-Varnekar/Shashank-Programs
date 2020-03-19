#include <bits/stdc++.h>

using namespace std;

void kangaroo (int x1, int v1, int x2, int v2)
{
    if(v2 > v1 && x2 > x1)
        cout << "NO";
    else 
        {
            while(x1!=x2)
            {
                x1 = x1 + v1;
                x2 = x2 + v2;
            }
            cout << "YES";
        }
}

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    kangaroo(x1, v1, x2, v2);
}
