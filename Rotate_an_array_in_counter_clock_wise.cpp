Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int  t;
	cin>>t;
	while(t--)
	{
	    long long int n,d;
	    cin>>n>>d;
	    long long int ar[n];
	    for(long long int i=0;i<n;i++)
	     cin>>ar[i];
	    reverse(ar,ar+d);
	    reverse(ar+d,ar+n);
	    reverse(ar,ar+n);
	    for(int i=0;i<n;i++)
	     cout<<ar[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
