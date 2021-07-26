#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int pos1, pos2;
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i] == ' '){
            pos1 = i+1;
            break;
        }
    }
    for(int i=pos1; i<len; i++){
        if(str[i] == ' '){
            pos2 = i;
            break;
        }
    }
    int size = pos2-pos1;
    string str1 = str.substr(pos1, size);
    int count = 0;
    for(int i=0; i<len; i++){
        if(str.substr(i, size) == str1){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}