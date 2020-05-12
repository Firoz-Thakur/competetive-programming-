
Given an array A (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. The converted array should be in form 
a < b > c < d > e < f. The relative order of elements is same in the output i.e you have to iterate on the original array only.

Example:
Input:
2
7
4 3 7 8 6 2 1
4
1 4 3 2
Output:
3 7 4 8 2 6 1
1 4 2 3


appraoach: if we want ar[0]element greater and then ar[1] smaller and then ar[2] greater.then we will make a peak at 0,2,4,6,8...
and we will check lets say for ar[2] : whether ar[1] or ar[3]  is greater ,if it is greater either of one we will swap the element.


2>  if we want ar[1] element greater and then ar[0]smaller and then sar[2] greater..then we will also  move in the peak,1,3,5,7,9
and will for every one wheter for any of them there exit element in their left or right side which is greater then we will swap.
its example is given::

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
	     cin>>ar[i];
	    for(int i=1;i<n;i=i+2)
	    {
	        if(ar[i-1]>ar[i])   //if we want 1st element then we will change we will put condtion if(i>0 && ar[i-1]>ar[i],and i will be ff from 0))
	         swap(ar[i],ar[i-1]);
	        if(ar[i+1]>ar[i] && i<n-1)
	         swap(ar[i+1],ar[i]);
	    }
	   for(int i=0;i<n;i++)
	    cout<<ar[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
