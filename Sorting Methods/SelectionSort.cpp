#include<bits/stdc++.h>
using namespace std;
Selectionsort(int arr[],int n)
{
	int min_index;
	for(int i=0;i<n-1;i++)
	{
		min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index=j;
			}
		}
		swap(arr[min_index],arr[i]);
	}
}
int main()
{
	int arr[7]={1,9,5,2,4,8,3};
	Selectionsort(arr,7);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i];
	}
	
}
