Given an array A of positive integers. Your task is to find the leaders in the array.

Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also,
the rightmost element is always a leader. 

Input:
4
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
3
4 1 4

Output:
17 5 2
4 0
7 7 3
4 4

Explanation:
Testcase 1: The first leader is 17 as it is greater than all the elements to its right.  Similarly, the next leader is 5. 
The right most element is always a leader so it is also included.


vector<int> leaders(int ar[], int n){
   
  vector <int> v;
  int x=INT_MIN;
  for(int i=n-1;i>=0;i--)
  {
      if(ar[i]>=x)
       {
           x=ar[i];
           v.push_back(ar[i]);
       }
  }

  reverse(v.begin(),v.end());
      
  return v;
  }
