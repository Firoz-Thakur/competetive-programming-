You are given an array of size n. Find the maximum possible length of a subarray such that its elements are arranged alternately either 
as even and odd or odd and even .

Example:
Input:
3
5
10 12 14 7 8
2
4 6
3
1 2 3

Output:
3
1
3

Example:
Testcase 1: The max length of subarray is 3 and the subarray is {14 7 8}. Here the array starts as an even element and has odd and 
even elements alternately.
Testcase 2: The array contains {4 6}. So, we can only choose 1 element as that will be the max length subarray.
Testcase 3: The subarray with max length 3 is {1 2 3}. It starts with an odd element and has even and odd elements alternately.

** For More Input/Output Examples Use 'Expected Output' option **



int maxEvenOdd(int ar[], int n) 
{ 
   //Your code here
   int curr=1;
   int ans=1;
   for(int i=0;i<n-1;i++)
   {
       if((ar[i]&1) ^  (ar[i+1]&1))
       {
           curr++;
       }
       else
       {
           ans=max(ans,curr);
           curr=1;
       }
   }
  ans=max(ans,curr); 
  return ans; 
} 
