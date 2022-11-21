#include<bits/stdc++.h>

using namespace std;

void print(int i,int n)
{
	
	if(n==0)
	{
		return;
	}
	else
	{
		cout<<i;
	}
	return print(i+1,n-1);
}

int main() {
	
    print(1,5);
	return 0;
}

//TimeComplexity:-O(N)