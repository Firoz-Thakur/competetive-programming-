 //kadan's algorithm
 
 int main()
 {
      int sofar=ar[0];
	    int cur=ar[0];
	    for(long long int i=1;i<n;i++)
	    {  
	       if(cur<0)   //for test case like -2,5,-1
	        cur=0;
	       if(cur+ar[i]<0)       //if cur is less than that is worthless ,better make it zero
	        cur=0;
	       else if((cur+ar[i])>sofar)   //if current sum is more than old one updarte it to new.
	         sofar=cur+ar[i];
	       cur=cur+ar[i];
	    }
	    cout<<sofar<<endl;
      }
