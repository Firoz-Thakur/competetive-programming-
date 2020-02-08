Given an array that contains odd number of occurrences for all numbers except for a few elements which are present even number of times. 
Find the elements which have even occurrences in the array in O(n) time complexity and O(1) extra space.

Input
3
11
9 12 23 10 12 12 15 23 14 12 15
5
23 12 56 34 32
4
10 34 10 56

Output
12 15 23


#include <iostream>
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
	    int max=-1;
	    for(int i=0;i<n;i++)
	    {
	       cin>>ar[i];
	       if(max<ar[i])
	         max=ar[i];
	    }
	    int ar2[max+2];
	    for(int i=0;i<=max;i++)
	        ar2[i]=0;
	    for(int i=0;i<n;i++)
	    {
	         ar2[ar[i]]++;
	    }
	   for(int i=0;i<=max;i++)
	   {
	       if(ar2[i]%2==0 && ar2[i]!=0)
	         cout<<i<<" ";
	   }
	    cout<<endl;
	}
	return 0;
	
}
