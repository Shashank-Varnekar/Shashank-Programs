#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int N;
        int count = 0;
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }
        sort(arr, arr+N);
        int min = arr[0];
        arr[N-1] = min;
        for(int i=0; i<N; i++){
            count += arr[i] / min;
        }
        cout << count << endl;
    }
    return 0;
}