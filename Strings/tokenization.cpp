#include<bits/stdc++.h>
using namespace std;
int main()
{

   string a;
   getline(cin,a);
   
   stringstream ss(a);
   
   string token;
   vector<string> tokens;
   
   while(getline(ss,token,' '))
   {
   	  tokens.push_back(token);
   }
   
   for(int i=0;i<tokens.size();i++)
   {
   	  cout<<tokens[i]<<" ";
   }
}
