#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z){
    int a;
    a = max(x, max(y,z));
    if(a == x){
        return (a*a == y*y+ z*z);
    }
    else if(a == y){
        return (a*a == x*x+ z*z);
    }
    else{
        return (a*a == y*y+ x*x);
    }
}

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if(check(x,y,z))
        cout << "Pythagorian Triplet" << endl;
    else
        cout << "Not Pythagorian Triplet" << endl;
    return 0;
}