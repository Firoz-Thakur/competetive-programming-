#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ar[]={1,2,3};
	int x=2;
	int n=sizeof(ar)/sizeof(int);
   
    //rotation
   // rotate(ar,ar+n-x,ar+n);     (start,from,upto);(star,mid,end);
   // for(int i=0;i<n;i++)
     // cout<<ar[i]<<" ";
     //cout<<endl;
     
    next_permutation(ar,ar+n);  //[1,2,3],next geater element by applying next_permutation one time [1,3,2]
    for(int x:ar)
     cout<<x<<" ";
    cout<<endl;
}
