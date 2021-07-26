#include<iostream>
using namespace std;
int main()
{
    int x = 4, y = 1, z = 2;
    int a = x << y;
    int b = x << z;
    int c = x >> y;
    int d = x >> z;
    cout << a << b << c << d;
    return 0;
}