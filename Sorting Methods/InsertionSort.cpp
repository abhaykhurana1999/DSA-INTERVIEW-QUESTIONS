#include<bits/stdc++.h>
using namespace std;
Insertionsort(int arr[],int n)
{
	
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
	    int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int arr[7]={1,9,5,2,4,8,3};
	Insertionsort(arr,7);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i];
	}
	
}
