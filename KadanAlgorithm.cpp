 //kadan's algorithm  -->> use to find the maximum subarray sum.
//array may contain positive as well as negative number.
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
 
 int maxSubarraySum(int ar[], int n){
    
    // Your code her
  int sum=0;
  int best=0;
  
  int f=0;
  for(int i=0;i<n;i++)
  {
    if(sum+ar[i]<0)
     sum=0;
    else 
    {  
        sum=sum+ar[i];
        best=max(sum,best);
        f=1;
    }
        
  }
  if(f==0)
  {
      return *max_element(ar,ar+n);
  }
  return best;
 
}









