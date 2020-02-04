An array is monotonic if it is either monotone increasing or monotone decreasing.

An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array A is monotone decreasing if for all i <= j, A[i] >= A[j].

Return true if and only if the given array A is monotonic. 
 
 Input: [6,5,4,4]
Output: true
Example 3:

Input: [1,3,2]
Output: false
 
 bool isMonotonic(vector<int>& A) {
        int flaga=0; //inc
        int flagb=0;  //dec
     for(long long int i=0;i<A.size()-1;i++)
     {
         if(A[i]>A[i+1])
         {
             flaga=1;  //1 incrasei
             if(flagb==1)
                  return false;
         }
         else if(A[i]<A[i+1] )
         { 
              flagb=1;
              if(flaga==1)
                   return false;
        }
         else
         {
             continue;
         }
    }
  return true;
    }
    
    
    
    #better code than previous----->>>>>>
    
     public boolean isMonotonic(int[] A) {
        boolean increasing = true;
        boolean decreasing = true;
        for (int i = 0; i < A.length - 1; ++i) {
            if (A[i] > A[i+1])
                increasing = false;
            if (A[i] < A[i+1])
                decreasing = false;
        }

        return increasing || decreasing;
    }
}
    
