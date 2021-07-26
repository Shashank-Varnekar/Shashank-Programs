#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums[];
    int i=0;
    while((scanf("%d",&nums[i])) == 0){
        i++;
    }
    int len = sizeof(nums)/sizeof(nums[0]);
    cout << len;
    for(int j=0; j<len; j++)
        cout << nums[j] << endl;
}