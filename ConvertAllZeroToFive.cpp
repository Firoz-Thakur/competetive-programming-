You are given an integer n. You need to convert all zeroes of n to 5.

int convertFive(int n)
{
  int res=0,p=1;
   while(n>0)
   {
       int rem=n%10;
       if(rem==0)
        rem=5;
      res=res+rem*p;
      p=p*10;
      n=n/10;
   }
   return res;
}
