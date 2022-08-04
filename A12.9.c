//recursive function to print octal of a given decimal number
#include<stdio.h>
void dtooctal(int);
int main()
  {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Octal is:\n");
    dtooctal(n);
    return 0;
  }
void dtooctal(int n)
  {
    if(n>0)
     {
       dtooctal(n/8);
       printf("%d",n%8);
     }
  }
