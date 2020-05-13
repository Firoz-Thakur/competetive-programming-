You are given heights of consecutive buildings. You can move from the roof of a building to the roof of next adjacent building.
You need to find the maximum number of consecutive steps you can put forward such that you gain an increase in altitude.

Input:
Example:
Input:
2
5
1 2 2 3 2
4
1 2 3 4
Output:
1
3

Explanation:
Testcase 1: 1, 2 or 2, 3 are the only consecutive buildings with increasing heights.
Testcase 2: 1 to 2 to 3 to 4 is the jump of length 3 to have maximum number of buildings with increasing heights.



time complexity : O(n);


int maxStep(int ar[], int n){
    
   //Your code
   //here
   int c=0;
   int ans=0;
  for(int i=0;i<n-1;i++)
  {
      if(ar[i]<ar[i+1])
      {
          c++;
      }
     else
     {
         ans=max(ans,c);
         c=0;
     }
  }
  ans=max(ans,c);
   return ans;
}
