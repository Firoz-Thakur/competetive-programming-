Given an array A of N positive integers and another number X. Determine whether or not there exist two elements in A whose sum is exactly X.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N and X, N is the size of array. The second line of each test case contains N integers representing array elements A[i].

Output:
Print "Yes" if there exist two elements in A whose sum is exactly X, else "No" (without quotes).

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 105
1 ≤ A[i] ≤ 105

Example:
Input:
2
6 16
1 4 45 6 10 8
5 10
1 2 4 3 6

Output:
Yes
Yes

method 1: SORTING (nlogn)
 
1.use sorting and then use two pointer approach.


method 2:- HASHMAP o(n)

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int ar[n];
	    for(long long int i=0;i<n;i++)
	     cin>>ar[i];
	    map<int,int> mp;
	    int flag=false;
	    for(int i=0;i<n;i++)
	    {
	        if(mp[ar[i]])
	         {
	             flag=true;
	             cout<<"Yes"<<endl;
	             break;
	         }
	        mp[k-ar[i]]++;
	    }
	   if(flag==false)
	    cout<<"No"<<endl;
	}
	return 0;
}
