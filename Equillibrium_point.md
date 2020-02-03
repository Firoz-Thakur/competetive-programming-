//Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

//The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.


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
	    long long sum=0;
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	        sum=sum+ar[i];
	    }
	    long long left_sum=0;
        int flag=0;
	    for(long long int i=0;i<n;i++)
	    {   
	        sum=sum-ar[i];
	        if(left_sum==sum)
	        {
	           cout<<i+1<<endl;
	           flag=1;
	           break;
	        }
	        left_sum=left_sum+ar[i];    
	    }
	   if(flag==0)
	    cout<<"-1"<<endl;
	   
	}
	return 0;
}
