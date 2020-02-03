# competetive-programming-
Code game 2.O
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
	    long long int i;
	    long long int max;
	    max=ar[n-1];
	    long long int ak[n];
	    long long int k=0;
	    for(i=n-2;i>=0;i--)
	    {   
	        if(ar[i]>=max)
	          {
	            max=ar[i];
	            ak[k]=max;
	            k++;
	          }
      	}
      	for(long long int i=k-1;i>=0;i--)
          cout<<ak[i]<<" ";
	 cout<<ar[n-1]<<endl;;
	} 	
	return 0;
}
