#include<bits/stdc++.h>
using namespace std;
int partition(int l,int h,int arr[])
{
	int i=l;
	int j=h;
	int pivot=arr[l];
	while(i<j)
	{
         do{
         	i++;
		 }while(arr[i]<=pivot);
		 
		 do
		 {  j--;
				 }while(arr[j]>pivot);
				 
		 if(i<j)
		 {
		 	swap(arr[i],arr[j]);
				 }		
	}
	swap(arr[l],arr[j]);
	return j;
	
}
quicksort(int l,int h,int arr[])
{
	if(l<h)
	{
		 int j=partition(l,h,arr);
	quicksort(l,j,arr);
	quicksort(j+1,h,arr);
	}
	
   
}
int main()
{
	int arr[7]={1,9,5,2,4,8,3};
	quicksort(0,7,arr);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i];
	}
	
}
