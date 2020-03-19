#include <iostream>
#include <cstdio>
using namespace std;

int sum(int D,int N)
{
    int j, add=0;
    for(j=0;j<=N;j++)
	{
        add = add + j;
    }
    if(D==1)
        return add;
    else 
      D--;
      return sum(D,add);
}

int main() 
{
	int tests, N, D, i, a[tests];
	cin >> tests;
	for(i=0;i<tests;i++){
	    cin >> D >> N ;
	    a[i] = sum(D,N);
	}
	for(i=0;i<tests;i++){
		cout << a[i] << "\n";
	}
	return 0;
}
