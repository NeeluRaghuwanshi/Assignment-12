//recursive function to print square of first n naural numbers
#include<stdio.h>
int sqr(int);
int main()
    {
      int x;
      printf("Enter a number\n");
      scanf("%d",&x);
      printf("Square of first %d natural numbers are:\n",x);
      sqr(x);
      return 0;
    }
int sqr(int n)
    {
      if(n>0)
      {
      sqr(n-1);
      printf("%d ",n*n);
      }
    }

