Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

DUTCH NATION FLAG ALGORITHM O(N);

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

//APPROACH::we will use the three pointer concept,low for 0s mid for 1s and high for 2s, only check for mid element mid means we are 
dealing with one,if ar[mid]=2 swap the  ar[mid] and ar[high] in  this way we will make all 2s to the last,same if ar[mid]==0 swap the
element to ar[low] in this way we will able to shift all the zero to left and all the 2s on the right side and 1s will remains in the middle
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    long int ar[n];
	   // map <int,int> mp;
	    for(long int i=0;i<n;i++)
	    {
	     cin>>ar[i];
	    }
	    long int low=0;
	    long int mid=0;
	    long int high=n-1;
	    while(mid<=high)
	    {
	       if(ar[mid]==1)    //no need to swap.
	        mid++;
	       else if(ar[mid]==2)
	         {
	          swap(ar[mid],ar[high]);  //mean we have to swap the 2 to last for sorting
	           high--;               //we can not increase the mid ,because their might be the possiblity that we have swaped both the 2 element in ,e
                                // means ar[mid]=2,ar[high]=2,so we can not incrase the mid elemnt,as 2 is not in its correct poistion.
                                 //but we can decrase the high pointer as 2 is in its correct poistion,
	         }
	         else{
	         
	               swap(ar[mid],ar[low]);
	               low++;  
	               mid++;     //if we are swaping low with mid mean 2 has aleady ecounter by mid because mid is going faster then low,and low having only 
                         // 1 or zero ..most of the time 1.means after swaping all are in correct position so increase both the pointer.
	          }
	     //   mid++;
	    }
	   for(long int i=0;i<n;i++)
	    cout<<ar[i]<<" ";
	  cout<<endl; 
	}
	return 0;
}
