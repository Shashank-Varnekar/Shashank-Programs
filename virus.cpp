#include <bits/stdc++.h>
using namespace std;

int main()
{
	string V;
	cin >> V;
	int N;
	cin >> N;
	string B;
    while(N--){
        cin >> B;
        int count = 0;
        for(int i=0; i<B.size(); i++){
            for(int j=0; j<V.size(); j++){
                if(B[i] == V[j]){
                    count++;
                    break;
                }
            }
        }
        if(count == B.size())
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;
    }
	return 0;
}