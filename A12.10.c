//recursive function to print reverse of a given number
#include<stdio.h>
int reverse(int);
int sum=0,rem;
int main()
{
   int n,rev;
   printf("Enter a number:\n");
   scanf("%d",&n);
   rev=reverse(n);
   printf("The number after reverse is :%d",rev);
   return 0;
}
int reverse(int n)
  {
    if(n)
    {
      rem=n%10;
      sum=sum*10+rem;
      reverse(n/10);
   }
   else
      return sum;
}
