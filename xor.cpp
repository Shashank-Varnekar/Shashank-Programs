#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            arr[i][j] = i^j;
            cout << arr[i][j];
        }
    }
    return 0;
}