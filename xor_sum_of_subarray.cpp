#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	   int sum=0;
	   int flag=0;
	   if(n%2==0)
	    {cout<<sum<<endl;
	     flag=1;
	    }
	   else
	    {
	        for(int i=0;i<n;i=i+2)
	        sum=sum^ar[i];
	    }
	  if(flag==0)
	   cout<<sum<<endl;
	}
	return 0;
}
