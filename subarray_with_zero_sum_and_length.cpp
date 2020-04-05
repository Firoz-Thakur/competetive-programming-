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
    unorderd_map<int ,bool> mp; 
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
  unordered_map<int,int> mp;
  int sum=0;
  int len=0;
  for(int i=0;i<n;i++)
  {  
      sum=sum+ar[i];
     // cout<<sum<<" ";
      if(sum==0)
        len=i+1;    ///if the sum of the array become zero ,it will only possible form i=0 to i=j(any index),starting from the i=0 thats why i+1
      if(mp.count(sum))
      {
               if(len<(i-(mp[sum])))
                len=i-(mp[sum]);
                
      }
     else                   // if the 15 15 15 are comming three times in the array we will only contain the first index of the element so that 
       mp[sum]=i;                 //we can get maximum subarray length
     
  }
  return len;
}



//subarray with given sum=k

Given an array containing N integers and an integer K. Your task is to find the length of the longest Sub-Array with sum of the 
elements equal to the given value K.
1
6 15
10 5 2 7 1 9

approach:the problem is same as the the subarray with sum=0;

if any preffix sum we will get equal to k,mean the prefix sum from the start is k,so we can simple make the len=i+1;

prefix array: p1,p2,p3,p4,pi,,......pj,.....pn.
    now if pj-pi=k mean sum(i+1,to j) is k.
   now we can simply conclude that if(pj-k) exists then we will have the subarray of the len (j-mp[pj-k]
   else we will keep inserting the value into the map
   
note: we will insert only first occurranc of the element into the map,because we want maximum length.   

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int ar[n];
	    for(int i=0;i<n;i++)
	     cin>>ar[i];
	    unordered_map<int,int> mp;
        int sum=0;
        int len=0;
       for(int i=0;i<n;i++)
       {  
        sum=sum+ar[i];
     // cout<<sum<<" ";
        if(sum==k)
        {
         len=max(len,i+1);
         } 
        if(mp.count(sum-k))
         {
             len=max(len,i-mp[sum-k]);
         } 
        if(mp.find(sum)==mp.end())   //for first occrence of the element.
          mp[sum]=i;                 
       }
	 cout<<len<<endl;
	}
	return 0;
}
