#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        int n = str.length();
        string pawri = "pawri";
        if(n < 5){
            cout << str << endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if(str.substr(i,5) == "party")
            {
                str.replace(i, 5, pawri);
            }
        }
        cout << str << endl;
    }
    return 0;
}