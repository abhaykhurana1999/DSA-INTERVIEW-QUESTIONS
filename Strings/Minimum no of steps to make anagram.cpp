class Solution {
public:
    int minSteps(string s, string t) {
        
      unordered_map<char,int> mp;
        int ans=0;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto x:t)
        {
           mp[x]--;
        }
        for(auto a:mp)
        {
           ans+=abs(a.second);
        }
        
        return ans/2;
        
        
    }
};
