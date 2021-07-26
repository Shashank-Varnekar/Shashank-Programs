#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    while(t--){
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
    
        //array of bit count
        int bits[32] = {0};
        for(int i=0; i<n; i++){
            int x = arr[i];
            int j = 31;
            while(x > 0){
                bits[j] += x % 2;
                x = x/2;
                j--;
            }
        }

        //xor count
        int count = 0;
        for(int i = 31; i>=0; i--){
            if(bits[i] != 0){
                if(bits[i] % k != 0)
                    count += bits[i] / k + 1;
                else
                    count += bits[i] / k;
            }
            else
                continue;
        }
        cout << count << endl;
    }
    return 0;
}