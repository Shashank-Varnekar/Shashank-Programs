#include <iostream>
#include <cstdlib>
using namespace std;
int diagonalDifference(int **arr, int n)
{
    /*int d1=0, d2=0, sum=0;
    for(int i=0; i<n; i++)
    {
        d1 = d1 + arr[i][i];
        d2 = d2 + arr[(n-1)-i][i];
    }
    sum = abs(d1-d2);
    return sum;*/
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j];
        }
    }
}

int main()
{
    int n, sum=0, arr[100][100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    diagonalDifference((int **)arr,n);
    //cout << sum;
}
