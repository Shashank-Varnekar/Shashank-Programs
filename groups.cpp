#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string S;
    int len;
    while(T--){
        cin >> S;
        int i=0, group = 0;
        while (i<S.size())
        {
            if(S[i]=='1'){
                while (i<S.length() && S[i] == '1')
                {
                    i++;            
                }
                group++;
            }
            else
                i++;
        }
        cout << group << endl;
    }
    return 0;
}