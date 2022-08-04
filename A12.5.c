//recursive function to print first N even natural numbers
#include<stdio.h>
void even(int);
int main()
   {
      int n;
      printf("Enter a number\n");
      scanf("%d",&n);
      even(n);
      return 0;

   }
void even(int n)
   {
     if(n>0)
     {
     even(n-1);
     printf("%d ",2*n);
     }
   }
