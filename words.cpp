#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int words = 1;
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i] == ' ' && isalpha(str[i+1]))
            words++;
    }
    cout << words << endl;
    return 0;
}