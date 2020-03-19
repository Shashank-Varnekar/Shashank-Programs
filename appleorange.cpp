#include<iostream>
using namespace std;
int countApplesandOranges(int s, int t, int a, int b, int apples[], int oranges[])
{
    int counta=0, counto=0, asum=0, osum=0;
    for(int i=0; i<a; i++)
    {
        asum = a + apples[i];
        if(asum >= s && asum <= t)
            counta++;
    }
    for(int i=0; i<b; i++)
    {
        osum = b + oranges[i];
        if(osum >= s && osum <= t)
            counto++;
    }
    cout << counta << "\n" << counto;
    return 0;
}
int main()
{
    int h1, h2;
    cin >> h1 >> h2;
    int t1, t2;
    cin >> t1 >> t2;
    int a, o;
    cin >> a >> o;
    int app[a], org[o];
    for(int i=0 ; i< a; i++)
    {
        cin >> app[i]; 
    }
    for(int i=0 ; i<o; i++)
    {
        cin >> org[i];
    }
    countApplesandOranges(h1,h2,a,o,app,org);
    return 0;
}
