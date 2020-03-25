You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities that can be 
performed by a single person, assuming that a person can only work on a single activity at a time.

Input Format
The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an integer N,
the number of activities. Then the next N lines contain two integers m and n, the start and end time of each activity.

1 
3
10 20
12 15
20 30
Sample Output
2
Explanation
Person only do 0th and 2nd activities.


approach: first sort the activities based on the vector second value and then simply check the condition whether starting time of next activity
is greater than the finishing activity of previous activity.


#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
 {
	 return a.second<b.second;
 }
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
        v.push_back(make_pair(a,b));
	}
	int temp=0;
	int c=0;
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
	{
		if((v[i].first)>=temp)
		{
			temp=v[i].second;
			c++;
		}
	}
	cout<<c<<endl;
	}
	return 0;
}
