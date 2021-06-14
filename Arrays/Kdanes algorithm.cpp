#include<bits/stdc++.h>
using namespace std;
   int maxSubarraySum(int arr[], int n){
        int maxs=0;
        int max_so_far=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxs+=arr[i];
            if(maxs>max_so_far)
            {
                max_so_far=maxs;
            }
            if(maxs<0)
            {
                maxs=0;
            }
        }
        
        
        return max_so_far;
        
    }
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubarraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
	
}
