Given an array arr[] of size N where every element is in range from 0 to n-1. Rearrange the given array so that arr[i] becomes
arr[arr[i]]. This should be done with O(1) extra space.
3
2
1 0
5
4 0 2 1 3
4
3 2 0 1

Output:
0 1
3 4 2 0 1
1 0 3 2



void arrange(long long arr[], int n) {
    // Your code here
    for(long long i=0;i<n;i++)
    {
     arr[i]=arr[i]+(arr[arr[i]]%n)*n ;
    
    }
     for(long long i=0;i<n;i++){
         
          arr[i]=arr[i]/n;
     }
}
