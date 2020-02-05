Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is
an element that appears more than N/2 times in the array.

Input:  
The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and
second line will be the elements of the array.

Output: 
For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.

Input:
2
5
3 1 3 3 2
3
1 2 3

Output:
3
-1

// ---->>>>>More voting algorithm
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int ar[n];
	    for(long long int i=0;i<n;i++)
	     cin>>ar[i];
	    int majority=0;
	    int count=1;
	    for(long long int i=1;i<n;i++)
	     {
	         if(ar[majority]==ar[i])
	          count++;
	         else
	          count--;
	         if(count==0)
	           {
	               majority=i;
	               count=1;
	           }
	     }
	     long long int c=0;
	     for(long long int i=0;i<n;i++)
	     {
	         if(ar[majority]==ar[i])
	            c++;
	     }
	     if(c>n/2)
	       cout<<ar[majority]<<endl;
	     else
	       cout<<"-1"<<endl;
	}
	return 0;
}
