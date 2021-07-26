#include<bits/stdc++.h>
using namespace std;


bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size(), i;
        int sum = 0;
        sum = accumulate(arr.begin(), arr.end(), sum);
        
        if(sum % 3 != 0)
            return 0;
        
        int target = sum / 3;
        int new_sum = arr[n-1];
        int flag = 0;
        
        for(i = n-2; i>=0; i--){
            if(new_sum == target){
                flag++;
                new_sum = 0;
            }
            else{
                new_sum += arr[i];
            }
        }
        cout << flag;
        return 0;
}

int main()
{
    vector<int> arr;
    int i;
    while(cin >> i){
        arr.push_back(i);
    }
    bool ans = canThreePartsEqualSum(arr);
    cout << ans << endl;
}