Given an array of integers, and an integer  ‘K’ , find the count of pairs of elements in the array whose sum is equal to 'K'.

2
4 6
1  5  7 1
4 2
1 1 1 1
Output
2
6


note :sorting was creating an issue ,but try again.
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    map <int,int> mp;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        count=count+mp[sum-ar[i]];
	        mp[ar[i]]++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
