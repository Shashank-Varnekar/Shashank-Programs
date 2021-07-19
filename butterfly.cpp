#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int space = 2*N-2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = N; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int space = 2*N-2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}