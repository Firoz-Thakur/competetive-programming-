Given an array a[] of N positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example:
Input:
2
5
4 2 -3 1 6
5
4 2 0 1 6

Output:
Yes
Yes


bool subArrayExists(int arr[], int n)
{
    //Your code here
    map<int ,bool> mp; 
    int sum=0;
    for(int i=0;i<n;i++)
      {
          sum=sum+arr[i];
          if(sum==0 || mp[sum]==true)
            return true;
          mp[sum]=true;     
      } 
    return false;
}


//length of the largest subarray--->>

int maxLen(int ar[],int n)
{
  //Your code here
  map<int,int> mp;
  int sum=0;
  int len=0;
  int flag;
  for(int i=0;i<n;i++)
  {   flag=0;
      sum=sum+ar[i];
     // cout<<sum<<" ";
      if(sum==0)
        len=i+1;    ///if the sum of the array become zero ,it will only possible form i=0 to i=j(any index),starting from the i=0 thats why i+1
      if(mp.count(sum))
      {
               if(len<(i-(mp[sum])))
                len=i-(mp[sum]);
                flag=1;   
      }
      if(flag==0)    // if the 15 15 15 are comming three times in the array we will only contain the first index of the element so that 
             mp[sum]=i;                 //we can get maximum subarray length
     
  }
  return len;
}
