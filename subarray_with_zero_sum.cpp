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
