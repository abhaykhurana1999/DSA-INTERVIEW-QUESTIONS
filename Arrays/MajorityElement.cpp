class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
        int count=0;
        int ans=nums[0];
        
        
        for(auto x:nums)
        {
           if(count==0)
               ans=x;
            
            if(x==ans)
                count++;
            else
                count--;
        }
        return ans;
    }
};
