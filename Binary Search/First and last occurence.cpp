#include<bits/stdc++.h>
using namespace std;
int search(int a[],int x,int n)
{
	int l=0;
	int h=n-1;
	int res=-1;
	while(l<=h)
	{
		int mid=l+(h-l)/2;
		if(a[mid]==x)
		{
			res=mid;
			h=mid-1;//for last occurence l=mid+1//
		}
		else if(a[mid]>x)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return res;

}
int main()
{
	int a[]={5,2,5,4,8,9,5,6};
	int n = sizeof(a) / sizeof(int);
	sort(a,a+n);
	cout<<search(a,5,n);
	
	
}
