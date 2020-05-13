Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max 
value, second should be min value, third should be second max, fourth should be second min and so on.
Input:
2
6
1 2 3 4 5 6
11 
10 20 30 40 50 60 70 80 90 100 110

Output:
6 1 5 2 4 3
110 10 100 20 90 30 80 40 70 50 60

void rearrange(int *ar, int n) 
{ 
	
	// Your code here
  int max=*max_element(ar,ar+n)+1;
  int mini=0;
  int maxi=n-1;
  for(int i=0;i<n;i++)
  {
      if(i%2==0)
      {
          ar[i]=ar[i]+(ar[maxi]%max)*max;
          maxi--;
          
      }
      else
      {
          ar[i]=ar[i]+(ar[mini]%max)*max;
          mini++;
      }
      
  }
for(int i=0;i<n;i++)
{
    ar[i]=ar[i]/max;
}

	}
	 
