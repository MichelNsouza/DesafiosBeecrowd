#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int V[10], N;
	
	cin >> N;
	
	V[0] = N;
	
	for(int i = 1; i < 10; i++)
	{
		V[i] = V[i-1]*2 ;
	}
	for(int i = 0; i < 10; i++)
	{
		printf("N[%d] = %d\n",i, V[i]);
	}
    return 0;
}
