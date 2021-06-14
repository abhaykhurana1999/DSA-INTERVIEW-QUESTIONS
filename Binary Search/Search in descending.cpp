#include<bits/stdc++.h>
using namespace std;
bool search(int l,int h,int x,int a[])
{
	
	if(l<=h)
	{
	
	int mid=(l+h)/2;
	if(a[mid]==x)
	{
		return true;
	}
	if(a[mid]>x)
	{
		return search(mid+1,h,x,a);
	}
	else
	{
		return search(l,mid-1,x,a);
	}
	
}
	return false;
}
int main()
{
	int a[]={1,2,3,4,8,9,5,6};
	sort(a,a+8,greater<int>());
	cout<<search(0,7,2,a);
	
	
}
