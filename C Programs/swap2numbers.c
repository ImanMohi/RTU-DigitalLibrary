#include<stdio.h>  
int main()    
{    
int a,b;
printf("Enter the 2 numbers to be swapped\n");
scanf("%d %d",&a,&b);
  
printf("Before swap a=%d b=%d",a,b);
  
a=(a+b); 
b=(a-b);    
a=(a-b);
  
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}  
