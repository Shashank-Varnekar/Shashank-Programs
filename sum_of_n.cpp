#include<iostream>
using namespace std;

int sum(int num){
    int res = (num*(num+1))/2;
    return res;
}

int main()
{
    int N;
    cin >> N;
    int ans =  sum(N);
    cout << ans << endl;
    return 0;
}