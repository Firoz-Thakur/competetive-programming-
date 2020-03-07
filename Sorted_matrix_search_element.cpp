Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

Input Format
First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

Constraints
1 <= N,M <= 30 0 <= A[i] <= 100

Output Format
Print 1 if the element is present in the matrix, else 0.

Sample Input
3 3
3 30 38
44 52 54
57 60 69
62
Sample Output
0


#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int ar[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ar[i][j];
		}
	}
	int key;
	cin>>key;
	int i=0;
	int j=m-1;
	int flag=0;
	while(i!=n && j>0)
	{ 
		if(ar[i][j]==key)
		{
			flag=1;
			break;
		}
		if(ar[i][j]>key)
		  j--;
		else
		  i++;
	}
    cout<<flag<<endl;
  	return 0;
}
