//recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void naturalrev(int);
int main()
   {
      int n;
      printf("Enter a number\n");
      scanf("%d",&n);
      naturalrev(n);
      return 0;

   }
void naturalrev(int n)
   {
    if(n>0)
     {
     printf("%d ",n);
     naturalrev(n-1);
     }
   }
