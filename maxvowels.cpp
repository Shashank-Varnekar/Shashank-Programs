#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int arr[5] = {0};
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int len = str.length();
    for(int i=0; i<len; i++){
        switch (str[i])
        {
        case 'a':
            arr[0]++;
            break;
        case 'e':
            arr[1]++;
            break;
        case 'i':
            arr[2]++;
            break;
        case 'o':
            arr[3]++;
            break;
        case 'u':
            arr[4]++;
            break;
        default:
            break;
        }
    }
    int loc = 0;
    for(int i=0;i<5;i++){
        if(arr[loc] < arr[i]){
            loc = i;
        }
    }
    cout << vowels[loc] << endl;
    return 0;
}