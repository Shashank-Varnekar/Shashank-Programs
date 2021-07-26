#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int L, R;
	int flag;
	while(T--){
		int k = 0;
		int arr[INT_MAX % 100] = {0};
		cin >> L >> R;
        if(L == 1)
            L = 2;
		for(int i=L; i<=R; i++){
			flag = 0;
			for(int j=2; j<=i/2; j++){
				if(i%j == 0){
					flag = 1;
					break;
				}
			}
            if(flag == 0){
				arr[k] = i;
				k++;
			}
		}
        if(k == 1)
            cout << 0 << endl;
        else if(k == 0)
            cout << -1 << endl;
        else{
            int min = arr[0];
            int max = arr[0];
            for (int i = 0; i < k; i++){
                if (arr[i] > max)
                    max = arr[i];
                if(arr[i] < min)
                    min = arr[i];
            }
            cout << (max - min) << endl;
        }
	}
	return 0;
}