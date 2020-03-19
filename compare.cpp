#include <iostream>
using namespace std;

int compareTriplets(int a[], int b[])
{
    int a_point = 0, b_point = 0, i, ans[2];
    for (i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            a_point++;
    	}
        else if(a[i]<b[i])
        {
            b_point++;
        }
        else
            ;
    }
    ans[0] = a_point;
    ans[1] = b_point;
    return ans;
}

int main()
{
    int i, a[3], b[3], ans[2];
    for(i=0; i<3; i++)
        cin >> a[i];
    for(i=0; i<3; i++)
        cin >> b[i];
    ans[2] = compareTriplets(a,b);
    for(i=0; i<2; i++)
    	cout << ans[i] << " ";
    return 0;
}
