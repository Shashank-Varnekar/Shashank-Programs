#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 1; i<=N; i++){
        int j;
        for(j=1; j<=N-i; j++){
            cout << "  ";
        }
        for(j=i; j>=1; --j){
            cout << j <<" ";
        }
        for(j=2; j<=i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}