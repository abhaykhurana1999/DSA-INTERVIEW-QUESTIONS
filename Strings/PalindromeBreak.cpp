#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	
	if(a.length()<=1)
	{
		a="";
	}
	
	if(a.length()==2)
	{
	    if(a[0]=='a')
	    {
	    	a[1]='b';
		}
		else
		{
			a[0]='a';
		}
	}
	cout<<a;
}
