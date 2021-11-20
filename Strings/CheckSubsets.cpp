#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int i=a.length();
	int j=b.length();
	
	  while(true)
	  {
	  	if(a[i]==b[j])
	  	{
	  		i--;
	  		j--;
		  }
		  else{
		  	i--;
		  }
		  
		  if(i==-1)
		  { 
		      break;
		  }
	  }
	  if(j==-1)
	  {
	  	cout<<"true";
	  }
}
