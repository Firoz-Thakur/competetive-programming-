Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

output:

4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 
Explanation
Rotate the array 90 degrees anticlockwise.

approach:: first reverse every row and than take transpose.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ar[n][n];
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	  cin>>ar[i][j];
    //first revers each rows;
	//then take transpose
	for(int i=0;i<n;i++)
	{
		reverse(ar[i],ar[i]+n);
	}

	//now take transpose
	for(int i=0;i<n;i++)
	 {
	 for(int j=0;j<n;j++)
	  {
	  	if(i<j)
	  	 {
	  	 	swap(ar[i][j],ar[j][i]);
	  	 }
	  }
	 }

   for(int i=0;i<n;i++)
	{
	 for(int j=0;j<n;j++)
	  cout<<ar[i][j]<<" ";
	 cout<<endl;
	}
	return 0;
}
