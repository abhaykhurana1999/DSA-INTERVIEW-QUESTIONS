class Solution {
public:
    
    int res(int i,string &s,unordered_set<string>&st,string temp)
    {
        if(i==s.size())
        {
           return 0;
        }
        temp+=s[i];
        int op1=INT_MIN,op2=INT_MIN;
        if(st.find(temp)==st.end())
        {
            st.insert(temp);
            op1=1+res(i+1,s,st,"");
            st.erase(temp);
        }
        op2=res(i+1,s,st,temp);
        return max(op1,op2);
    }
    int maxUniqueSplit(string s) {
        
        unordered_set<string> st;
        return res(0,s,st,"");
    }
};
