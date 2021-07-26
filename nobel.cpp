#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int N, M;
        cin >> N >> M;
        int arr[N];
        int flag = 0;
        for(int i=1; i<=N; i++){
            cin >> arr[i];
        }
        int array[M+1] = {0};

        for(int i=1; i<=N; i++){
            array[arr[i]]++;
        }
        for(int i=1; i<=M; i++){
            if(array[i] == 0){
                flag = 1;
                break;
            }
        }

        if(flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}