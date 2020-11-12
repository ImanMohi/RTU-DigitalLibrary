#include<stdio.h>
void main()
{
  int a[20],i,j,n,min,temp;
  printf("enter the number n array:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   scanf("%d",&a[i]);
   }
   for(i=1;i<=n;i++)
   {
   min=i;
   for(j=i+1;j<=n;j++)
   {
   if(a[j]<a[min])
   {
    min=j;
    }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
   }
   printf("the sorted array is ");
   for(i=1;i<=n;i++)
   {
      printf("%d",a[i]);
      }
      }
