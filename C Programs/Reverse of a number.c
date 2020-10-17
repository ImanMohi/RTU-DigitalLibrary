//program to print reverse of a given number
#include <stdio.h>
int main()
{
  int n,sum,pro,rev,t; 
  printf("enter the number : ");
  scanf("%d",&n);
  while(n!=0)
  {
    rev=rev*10;
    t=n%10;
    rev=rev+t; 
     n=n/10;
     }
     printf("the reverse of number:%d",rev);
getch();
}
