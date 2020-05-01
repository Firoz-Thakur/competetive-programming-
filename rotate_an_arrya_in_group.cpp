Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.


Example:
Input
4
5 3
1 2 3 4 5
4 3
5 6 8 9
4 7
5 6 8 9
8 3
1 2 3 4 5 6 7 8

Output
3 2 1 5 4
8 6 5 9
9 8 6 5
3 2 1 6 5 4 8 7

Explanation:
Testcase 1: Reversing groups in size k = 3, first group consists of elements 1, 2, 3. Reversing this group, we have elements in 
order as 3, 2, 1.
Testcase 2: Our array is 5 6 8 9. The value of k is 3. So we reverse it in groups of 3.  After reversing, it becomes 8 6 5 9.
Testcase 3: Our array is 5 6 8 9. The value of k is 7. After reversing, it becomes 9 8 6 5.
Testcase 4: Our array is 1 2 3 4 5 6 7 8. The value of k is 3. After reversing, it becomes 3 2 1 6 5 4 8 7.


vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
    int i;
    for(int i=0;i<n;i=i+k)
    {
       if(mv.begin()+i +k < mv.end())
        reverse(mv.begin()+i,mv.begin()+i+k);
      else
        reverse(mv.begin()+i,mv.end());
    }
    
 return mv;    
    
