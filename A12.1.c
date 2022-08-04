//recursive function to print first N natural numbers
#include<stdio.h>
void natural(int);
int main()
   {
      int n;
      printf("Enter a number\n");
      scanf("%d",&n);
      natural(n);
      return 0;

   }
void natural(int n)
   {
     if(n>0)
     {
     natural(n-1);
     printf("%d ",n);
     }
   }
