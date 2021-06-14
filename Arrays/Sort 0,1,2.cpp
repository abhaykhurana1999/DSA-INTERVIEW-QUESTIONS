#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={0,1,2,0,1,1,2,2,0};
	int n=sizeof(a)/sizeof(int);
	int l=0,h=n-1;
	int mid=0;
	while(mid<=h)
	{
		
		switch(a[mid])
		{
			case 0: swap(a[mid],a[l]);
			        l++,mid++;
			        break;
					
			case 1: mid++;
			        break;
			
			case 2: swap(a[mid],a[h]);
			         h--;
					 break;			
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
