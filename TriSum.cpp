Given an array A[] of N elements. The task is to complete the function which returns true if triplets exists in array A whose sum
is zero else returns false.

Input:
2
5
0 -1 2 -3 1
3
1 2 3

Output:
1
0
-->>o(n^2) best complexity for this probelm.

bool findTriplets(int ar[], int n)
{ 
    //Your code here
    int i,j,k;
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        j=i+1;
        k=n-1;
        int sum=0;
        while(j<k)
        {
            sum=ar[i]+ar[j]+ar[k];
            if(sum==0)
             return 1;
             else if(sum>0)
                k--;
             else
               j++;
        }
    }
    return 0;
