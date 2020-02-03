# competetive-programming-
Code game 2.O

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
