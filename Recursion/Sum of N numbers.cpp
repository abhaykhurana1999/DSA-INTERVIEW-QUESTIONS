#include<bits/stdc++.h>

using namespace std;

int print(int n,int sum)
{
	
	if(n==0)
	{
		return sum;
	}
	else
	{
		sum=sum+n;
	}
	return print(n-1,sum);
}

int main() {
	int sum=0;
    cout<<print(5,sum);
	return 0;
}

//TimeComplexity:-O(N)