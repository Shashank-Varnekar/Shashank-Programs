#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int words = 1;
    int count = 0;
    int middle;
    int pos;
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i] == ' ')
            words++;
    }
    if(words % 2 == 0)
        middle = words/2 - 1;
    else
        middle = words/2;
    for(int i=0; i<len; i++){
        if(str[i] == ' '){
            count++;
            if(count == middle){
                pos = i + 1;
            }
        }
    }
    int i = pos;
    while(str[i] != ' '){
        cout << str[i];
        i++;
    }
    return 0;
}