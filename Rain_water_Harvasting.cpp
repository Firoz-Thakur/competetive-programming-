Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints
Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input:
10
0 2 1 3 0 1 2 1 2 1
Sample Output:
5

//1.first compute the the left greatest building of every building from i=0; means if i=4th find upto 4 the which building is greatest.
//2.then compute the right greatest building of every building from the i=n;mean i=4th find greater than 4th what is the greatest building.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	  cin>>ar[i];
	int left[n];
	int right[n];
	int leftmax=-1;
	for(int i=0;i<n;i++)
	{
        if(ar[i]>leftmax)
		  {
			  leftmax=ar[i];
			  left[i]=leftmax;
		  }
     left[i]=leftmax;
	}
	//for(int i=0;i<n;i++)
	  // cout<<left[i]<<" ";
	  // cout<<endl;
	int rightmax=-1;
	for(int i=n-1;i>=0;i--)
	{
        if(ar[i]>rightmax)
		  {
			  rightmax=ar[i];
			  right[i]=rightmax;
		  }
	 right[i]=rightmax;
	}
    int count=0;
   for(int i=0;i<n;i++)
   { 
    int x=min(left[i],right[i])-ar[i];
    count=count+x;
   }
   cout<<count;
	return 0;
}


