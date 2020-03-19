#include<iostream>
using namespace std;

int birthdayCakeCandles(int n, int arr[])
{
    int max, count=0;
    for(int i=0; i<n; i++)
    {
        max = arr[0];
        if(max < arr[i])
            max = arr[i];
            cout << max;
    }
    for(int i=0; i<n; i++)
    {
//        if(arr[i]==max)
  //          count++;
    }
    return count;
}

int main()
{
    int n, blows;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    blows = birthdayCakeCandles(n,arr);
    cout << blows;
    return 0;
}
