//recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void oddrev(int);
int main()
   {
      int n;
      printf("Enter a number\n");
      scanf("%d",&n);
      oddrev(n);
      return 0;

   }
void oddrev(int n)
   {
     if(n>0)
     {
     printf("%d ",2*n-1);
     oddrev(n-1);
     }
   }
