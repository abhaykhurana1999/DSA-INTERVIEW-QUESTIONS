class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int l=s.size();
        if(l%2==0)
        {
            int k=1;
            for(int i=0;i<(l/2);i++)
            {
                swap(s[i],s[l-k]);
                    k++;
            }
        }
        else
        {
            int z=1;
             for(int i=0;i<(l/2);i++)
            {
                swap(s[i],s[l-z]);
                    z++;
            }
        }
        
        for(int i=0;i<l;i++)
        {
           cout<<s[i];
        }
    }
};
