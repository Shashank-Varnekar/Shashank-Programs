#include<bits/stdc++.h>
#define max 10000
using namespace std;

int main()
{
    char arr[max];
    int n=0;
    while(cin >> arr[n]){
        n++;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}