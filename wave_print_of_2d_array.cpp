ake as input a two-d array. Wave print it column-wise.
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END

#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int ar[n][m];
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	    cinar[i][j];
    for(int col=0;col<m;col++)
	{
		if(col%2==0)
		   for(int row=0;row<n;row++)
		    cout<<ar[row][col]<<","<<" ";
		else
		   for(int row=n-1;row>=0;row--)
		    cout<<ar[row][col]<<","<<" ";
	}
	cout<<"END";
	return 0;
}
