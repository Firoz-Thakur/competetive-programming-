Given an array A of N length. We need to calculate the next greater element for each element in given array. If next greater element 
is not available in given array then we need to fill ‘_’ at that index place.

in smple find the next maximum element fot the given Ai in the array .next max element should be present on the same array itself
Example:
Input
2
9
6 3 9 8 10 2 1 15 7
4
13 6 7 12

Output:
7 6 10 9 15 3 2 _ 8
_ 7 12 13

Explanation:
Testcase 1: Here every element of the array has next greater element but at index 7, 15 is the greatest element of given array and no
other element is greater from 15 so at the index of 15 we fill with '_'.
Testcase 2: Here, at index 0, 13 is the greatest value in given array and no other array element is greater from 13 so at index 0 we
fill '_'.



#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    map <int,int> mp;
	    int n;
	    cin>>n;
	    int ar[n];
	    int ar1[n];
	    for(int i=0;i<n;i++)
	     cin>>ar[i];
	    for(int i=0;i<n;i++)
	     ar1[i]=ar[i];
	    sort(ar1,ar1+n);
	    int mx=ar1[n-1];
	    for(int i=0;i<n-1;i++)
	      {
	          mp[ar1[i]]=ar1[i+1];
	      }
	     for(int i=0;i<n;i++)  
	       {
	           if(ar[i]==mx)
	             cout<<"_"<<" ";
	            else
	             cout<<mp[ar[i]]<<" ";
	       }
	       cout<<endl;
	}
	return 0;
}
