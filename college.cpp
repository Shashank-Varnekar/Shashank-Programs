#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int N, M;
        cin >> N >> M;
        int F[N], C[M];
        for(int i=0; i<N; i++){
            cin >> F[i];
        }
        for(int i=0; i<M; i++)
            cin >> C[i];

        int arr[N+M];
        int swit = 0; 
        for(int i=0; i<N; i++){
            arr[i] = F[i];
        }
        for(int i=0; i<M; i++){
            arr[N+i] = C[i];
        }
        
        for(int i=0; i<N+M; i++){
            if(i != arr[i])
            {
                swit++;
            }
        }
        cout << swit << endl;
    }
    return 0;
}