#include<stdio.h>  
int main()    
{    
int a,b,c=0;
printf("Enter the 2 numbers to be swapped\n");
scanf("%d%d",&a,&b);      
printf("Before swap a=%d b=%d",a,b);      
c = a;
a = b;
b = c;
  //a=a+b; 
//b=a-b;    
//a=a-b;   
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}  
