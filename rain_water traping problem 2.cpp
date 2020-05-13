Given an integer array height of size N which represents the heights of N buildings, the task is to delete N-2 buildings such that
the water that can be trapped between the remaining two building is maximum. Please note that the total water trapped between two
buildings is gap between them (number of buildings removed) multiplied by height of the smaller building.

Input:
2
6
2 1 3 4 6 5
2
2 1
Output:
8
0

Explanation:
Testcase1: The heights are 2 1 3 4 6 5. So we choose the following buildings 2 1 3 4 6 5  and remove others. So total removed buildings
is equal to 4, now the height of smaller one is 2. So answer is 2 * removed buildings = 2*4 = 8. There is no answer greater than this.
Testcase2: The heights are 2 1. So we choose the following buildings 2 5  and remove others. But there is no other buildings to be 
removed so total removed = 0.  Now the height of smaller one is 2. So answer is 2 * removed buildings = 2*0 = 0.

** For More Input/Output Examples Use 'Expected Output' option **


int maxWater(int height[], int n) 
{ 
    //Your code here
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<j)
    {
        int mini=min(height[i],height[j])*(j-i-1);
        ans=max(ans,mini);
        if(height[i]<=height[j])
          i++;
        else
          j--;
    }
    return ans;
} 
