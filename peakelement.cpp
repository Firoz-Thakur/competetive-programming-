Given an array A of N integers. The task is to find a peak element in it.
An array element is peak if it is not smaller than its neighbours. For corner elements, we need to consider only one neighbour.

Note: There may be multiple peak element possible, in that case you may return any valid index.

int peakElement(int arr[], int n)
{
   // Your code he
   int l=0,r=n-1;
   while(l<r)
   {
       int mid=(l+r)/2;
       if((mid==0 || arr[mid]>=arr[mid+1])  &&( mid==n-1 || arr[mid]>=arr[mid-1]))
            return mid;
        if(mid>0 &&arr[mid-1]>arr[mid])
        {
            r--;
        }
        else
            l++;
        
   }
}
