Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array).
The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9

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
	    long long int sum=0;
	    for(long long int i=0;i<n-1;i++)
	    {
	        cin>>ar[i];
	        sum=sum+ar[i];
	    }
	   cout<<((n*(n+1))/2)-sum<<endl;
	}
	return 0;
}
